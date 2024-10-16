// Fill out your copyright notice in the Description page of Project Settings.



#include "Characters/Jon.h"


#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
// Sets default values
AJon::AJon()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraReal = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	RootComponent = GetCapsuleComponent();
	CameraReal->SetupAttachment(RootComponent);
	GetMesh()->SetupAttachment(CameraReal);
	CameraReal->bUsePawnControlRotation = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	//SlideVariables

	MaxWalkSpeed = GetCharacterMovement()->MaxWalkSpeed;
	SlideSpeed = 2000.f;
	CanSlide = false;
}

// Called when the game starts or when spawned
void AJon::BeginPlay()
{
	Super::BeginPlay();
	//GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("halfheight Value: %f"), CapsuleComponentHalfHeight));
	//GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("halfheight Value: %f"), GetMesh()->GetComponentScale().Z));

}

void AJon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void AJon::Movefoward(float Value)
{
	if (Controller != nullptr && Value)
	{
		FVector Forward = CameraDirection(EAxis::X);
		AddMovementInput(Forward, Value);
	}
}

void AJon::Moveside(float Value)
{
	if (Controller != nullptr && Value)
	{
		FVector Right = CameraDirection(EAxis::Y);
		AddMovementInput(Right, Value);
	}
}

void AJon::Lookup(float Value)
{
	AddControllerPitchInput(Value);
}

void AJon::Lookaround(float Value)
{
	AddControllerYawInput(Value);
}

void AJon::Slide(float Value)
{
	if (Value == 0)
	{
		//UnCrouch();
		/*if (CanSlide == true)
		{
			GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("Slide value = 0 canslide = true")));
			GetWorldTimerManager().SetTimer(SlideTimeHandler,this,&AJon::EndSlide,0.5f,false);
			//CanSlide = false;
			return;
		}
		*/
		//CanSlide = false;
		//UnCrouch();
		return;
	}
	
	if (CanSlide == false)
	{
		GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("slide true: %f")));
		CanSlide = true;
		GetWorldTimerManager().SetTimer(SlideTimeHandler,this,&AJon::SlideCooldown,1.f,false);
		BeginSlide();
	}

}

void AJon::BeginSlide()
{
	Crouch();
	GetWorldTimerManager().SetTimer(SlideTimeHandler,this,&AJon::Sliding,0.01f,false);
}

void AJon::Sliding()
{
	FVector Forward = CameraDirection(EAxis::X);
	GetCharacterMovement()->GroundFriction = 0.2f;
	LaunchCharacter(Forward * SlideSpeed, true, true);
	GetWorldTimerManager().SetTimer(SlideTimeHandler,this,&AJon::EndSlide,0.5f,false);

}

void AJon::EndSlide()
{
	GetCharacterMovement()->GroundFriction = 2.f;
	UnCrouch();
	GetWorldTimerManager().SetTimer(SlideTimeHandler,this,&AJon::SlideCooldown,0.5f,false);

	//CanSlide = false;
}

void AJon::SlideCooldown()
{
	CanSlide = false;
}


// Called to bind functionality to input
void AJon::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveFoward",this, &AJon::Movefoward);
	PlayerInputComponent->BindAxis("MoveSide",this, &AJon::Moveside);
	PlayerInputComponent->BindAxis("Lookup",this, &AJon::Lookup);
	PlayerInputComponent->BindAxis("LookSide",this, &AJon::Lookaround);
	PlayerInputComponent->BindAxis("Slide",this, &AJon::Slide);
}

FVector AJon::CameraDirection(EAxis::Type Direction)
{
	FRotator CameraYaw = FRotator(0,Controller->GetControlRotation().Yaw,0);
	FVector CameraDirection  = FRotationMatrix(CameraYaw).GetUnitAxis(Direction);
	return CameraDirection;
}



