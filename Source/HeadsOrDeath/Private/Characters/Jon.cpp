// Fill out your copyright notice in the Description page of Project Settings.



#include "Characters/Jon.h"


#include "Camera/CameraComponent.h"
#include "Characters/JonPlayerController.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Widgets/BuffsWidgets.h"
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

	DefaultMaxspeed = GetCharacterMovement()->MaxWalkSpeed;
	SlideSpeed = 2000.f;
	CanSlide = false;
}

// Called when the game starts or when spawned
void AJon::BeginPlay()
{
	Super::BeginPlay();
	AJonPlayerControllerVar = Cast<AJonPlayerController>(GetController());
	if (AJonPlayerControllerVar != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("Controller is not null")));
	}
	//GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("halfheight Value: %f"), CapsuleComponentHalfHeight));
	//GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("halfheight Value: %f"), GetMesh()->GetComponentScale().Z));

}

void AJon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("defaultmovementspeed: %f"), DefaultMaxspeed));
	GEngine->AddOnScreenDebugMessage(0,10.f,FColor::Black,FString::Printf(TEXT("movementspeed: %f"), GetCharacterMovement()->MaxWalkSpeed));

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

void AJon::Buff1()
{
	BuffSelection = 0;
}

void AJon::Buff2()
{
	BuffSelection = 1;
}

void AJon::Buff3()
{
	BuffSelection = 2;
}

void AJon::ActivateBuff()
{
	if (FMath::RandBool())
	{
		switch (BuffSelection)
		{
		case 0:
			Invicibility();
			break;
		case 1:
			DashResets();
			break;
		case 2:
			ExplosiveBullet();
			break;
		}
	}
	else
	{
		switch (BuffSelection)
		{
		case 0:
			PlayerTakesMoreDmg();
			break;
		case 1:
			MinusMovementSpeed();
			break;
		case 2:
			LessDamageGiven();
			break;
		}
	}
	
}

void AJon::DeactivateBuff()
{
	GetCharacterMovement()->MaxWalkSpeed = DefaultMaxspeed;
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

void AJon::Invicibility()
{
	AJonPlayerControllerVar->BuffsWidgets->Highlight(FText::FromString("Buff: invencibilidade"), FColor::Green);
}

void AJon::DashResets()
{
	AJonPlayerControllerVar->BuffsWidgets->Highlight(FText::FromString("Buff: Dash Reset"),FColor::Green);
}

void AJon::ExplosiveBullet()
{
	AJonPlayerControllerVar->BuffsWidgets->Highlight(FText::FromString("Buff: Bala Explosiva"),FColor::Green);
}
void AJon::InvicibilityPlus()
{
	AJonPlayerControllerVar->BuffsWidgets->Highlight(FText::FromString("Buff+: InvicibilityPlus"), FColor::Green);
}

void AJon::DashResettimer()
{
	AJonPlayerControllerVar->BuffsWidgets->Highlight(FText::FromString("Buff+: Reset Dash Timer com cada kill"), FColor::Green);
}

void AJon::ExplosiveBullet3()
{
	AJonPlayerControllerVar->BuffsWidgets->Highlight(FText::FromString("3 Balas Explosivas"), FColor::Green);
}

void AJon::PlayerTakesMoreDmg()
{
	AJonPlayerControllerVar->BuffsWidgets->Highlight(FText::FromString("Debuff: Jogador esta a levar mais 25% de dano"), FColor::Red);
}

void AJon::MinusMovementSpeed()
{
	AJonPlayerControllerVar->BuffsWidgets->Highlight(FText::FromString("Debuff: O jogador tem menos moviment speed"),FColor::Red);
	GetCharacterMovement()->MaxWalkSpeed /= 1.5; 
	GetWorldTimerManager().SetTimer(ResetCooldownTimerHandle,this, &AJon::DeactivateBuff, 10.f, false);
}

void AJon::LessDamageGiven()
{
	AJonPlayerControllerVar->BuffsWidgets->Highlight(FText::FromString("Debuff: O jogador esta a dar menos dano aos enimigos"),FColor::Red);

}

void AJon::PlayerTakesEvenMoreDmg()
{
	AJonPlayerControllerVar->BuffsWidgets->Highlight(FText::FromString("Debuff+: o jogador esta a levar 50% mais dano"),FColor::Red);

}

void AJon::GetsStun()
{
	AJonPlayerControllerVar->BuffsWidgets->Highlight(FText::FromString("Debuff:+: o jogador esta stunned"),FColor::Red);

}

void AJon::LessDamageGivenPLUS()
{
	AJonPlayerControllerVar->BuffsWidgets->Highlight(FText::FromString("Debuff+: o jogador da menos 50% dano aos enimigos"),FColor::Red);
}



