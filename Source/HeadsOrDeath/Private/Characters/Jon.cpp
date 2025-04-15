// Fill out your copyright notice in the Description page of Project Settings.



#include "Characters/Jon.h"


#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Characters/BuffDebuffComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
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
	SlideSpeed = 1500.f;
	CanSlide = false;
}

// Called when the game starts or when spawned
void AJon::BeginPlay()
{
	Super::BeginPlay();
	//GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("halfheight Value: %f"), CapsuleComponentHalfHeight));
	//GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("halfheight Value: %f"), GetMesh()->GetComponentScale().Z));
	NoiseEmitter = this->GetPawnNoiseEmitterComponent();
	BuffDebuffComponent = FindComponentByClass<UBuffDebuffComponent>();
	InitialGravity = GetCharacterMovement()->GravityScale;
}


void AJon::Tick(float DeltaTime)
{
	
	//PlayerHealth -= 1 * GetWorld()->GetDeltaSeconds();
	if (CanSlide == true && GetCharacterMovement()->IsFalling())
	{
		GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("Masstimes")));
		//GetCharacterMovement()->GravityScale = InitialGravity*4;
	}
	else 
	{
		GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("Massdevided")));
		//GetCharacterMovement()->GravityScale = InitialGravity/4;
	}
	if (CanFire == false)
	{
		FireRate -= DeltaTime;
	}
	if (FireRate < 0.f)
	{
		CanFire = true;
		FireRate = 0.3f;
	}
	Super::Tick(DeltaTime);
}
void AJon::Movefoward(float Value)
{
	if (Controller != nullptr && Value)
	{
		FRotator CameraYaw = FRotator(0,Controller->GetControlRotation().Yaw,0);
		FVector Forward  = FRotationMatrix(CameraYaw).GetUnitAxis(EAxis::X);
		AddMovementInput(Forward, Value);
		MakeNoise(50, this,GetActorLocation());
	}
}

void AJon::Moveside(float Value)
{
	if (Controller != nullptr && Value)
	{
		FRotator CameraYaw = FRotator(0,Controller->GetControlRotation().Yaw,0);
		FVector Right  = FRotationMatrix(CameraYaw).GetUnitAxis(EAxis::Y);
		AddMovementInput(Right, Value);
		MakeNoise(50, this,GetActorLocation());
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
	//NEEDS POLISH  Raycast to surface to know what surface and normal we are on and then change our direction based on that for stairs and ramps for more professional slide and to know slide forward in stairs and ramps and instead slide downstairs or upstairs and slide down and up  
	if (Value == 0)
	{
		return;
	}
	if(GetCharacterMovement()->IsFalling() == true)
	{
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

void AJon::Jump()
{
	Super::Jump();
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("jumpjon2")));
}

void AJon::BeginSlide()
{
	GetCapsuleComponent()->SetCapsuleHalfHeight(GetCapsuleComponent()->GetScaledCapsuleHalfHeight()/3);
	GetWorldTimerManager().SetTimer(SlideTimeHandler,this,&AJon::Sliding,0.01f,false);
}

void AJon::Sliding()
{
	FRotator CameraYaw = FRotator(0,Controller->GetControlRotation().Yaw,0);
	FVector Forward  = FRotationMatrix(CameraYaw).GetUnitAxis(EAxis::X);
	GetCharacterMovement()->GroundFriction = 0.2f;
	GetCharacterMovement()->AddImpulse(Forward * SlideSpeed,true);
	//LaunchCharacter(Forward * SlideSpeed, true, true);
	UE_LOG(LogTemp, Warning, TEXT("Timer"));
	GetWorldTimerManager().SetTimer(SlideTimeHandler,this,&AJon::EndSlide,0.5f,false);

}

void AJon::EndSlide()
{
	GetCharacterMovement()->GroundFriction = 2.f;
	GetCapsuleComponent()->SetCapsuleHalfHeight(GetCapsuleComponent()->GetScaledCapsuleHalfHeight()*3);
	//UnCrouch();
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

void AJon::raycast()
{
	FString text = GetMesh()->GetChildComponent(0)->GetName();	
	FVector Start = CameraReal->GetComponentLocation();
	
	float Radius = -50.0f;
	int NumTraces = 10; // Number of traces for coverage
	UE_LOG(LogTemp, Warning, TEXT("Vector  %s "), *text);
	UE_LOG(LogTemp, Warning, TEXT("Vector  %s "), *Start.ToString());
	for (int i = 0; i < NumTraces; i++)
	{
		FVector RandomOffset = FMath::VRand() * Radius;
		//FVector End = Start + RandomOffset;
		FVector End = Start + CameraReal->GetForwardVector() * 1000 + RandomOffset;
	
		FHitResult HitResult;
		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(this);

		bool bHit = GetWorld()->LineTraceSingleByChannel(
			HitResult,
			Start,
			End,
			ECC_Visibility,
			QueryParams
		);

		if (bHit)
		{
			//DrawDebugLine(GetWorld(),Start,End,FColor::Emerald,true);
			UE_LOG(LogTemp, Warning, TEXT("Hit: %s"), *HitResult.GetActor()->GetName());
			ACharacter* Enemy = Cast<ACharacter>(HitResult.GetActor());
			if (Enemy)
			{
				UE_LOG(LogTemp, Warning, TEXT("Hit Actor:  "), *Enemy->GetName());
				Enemy->LaunchCharacter((HitResult.TraceEnd-HitResult.TraceStart) *7.5f,false,false);
				return;
			}
		}
	}
}

 
