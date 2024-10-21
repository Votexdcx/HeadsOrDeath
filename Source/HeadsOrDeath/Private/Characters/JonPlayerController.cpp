// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/JonPlayerController.h"
#include "Characters/Jon.h"
#include "Widgets/BuffsWidgets.h"
#include "Kismet/GameplayStatics.h" 

AJonPlayerController::AJonPlayerController()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AJonPlayerController::BeginPlay()
{
	Super::BeginPlay();
	Jon =  Cast<AJon>(GetPawn());
}

void AJonPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AJonPlayerController::Buff1(float Value)
{
	if (Value == 0)
	{
		return;
	}
	if (Jon == nullptr)
	{
		return;
	}
	Jon->Buff1();
}

void AJonPlayerController::Buff2(float Value)
{
	if (Value == 0)
	{
		return;
	}
	if (Jon == nullptr)
	{
		return;
	}
	Jon->Buff2();
}

void AJonPlayerController::Buff3(float Value)
{
	if (Value == 0)
	{
		return;
	}
	if (Jon == nullptr)
	{
		return;
	}
	Jon->Buff3();
}

void AJonPlayerController::InputActionActivateBuff()
{
	if(CanUseCoin == true)
	{
		CanUseCoin = false;
		Jon->ActivateBuff();
		GetWorldTimerManager().SetTimer(CoinTimerHandle,this,&AJonPlayerController::CoinReset,CoinCoolDownTimer,false);
	}
}

void AJonPlayerController::CoinReset()
{
	CanUseCoin = true;
}

void AJonPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("Buff1", this, &AJonPlayerController::Buff1);
	InputComponent->BindAxis("Buff2", this, &AJonPlayerController::Buff2);
	InputComponent->BindAxis("Buff3", this, &AJonPlayerController::Buff3);
	InputComponent->BindAction("TossCoin", EInputEvent::IE_Pressed, this, &AJonPlayerController::InputActionActivateBuff);
}
