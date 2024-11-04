// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/JonPlayerController.h"
#include "Characters/Jon.h"
#include "Characters/BuffDebuffComponent.h"

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
	UBuffDebuffComponentInstance = Cast<UBuffDebuffComponent>(Jon->FindComponentByClass<UBuffDebuffComponent>());
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
	UBuffDebuffComponentInstance->BuffSelectionFunc(0);
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
	UBuffDebuffComponentInstance->BuffSelectionFunc(1);
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
	UBuffDebuffComponentInstance->BuffSelectionFunc(2);
}

void AJonPlayerController::InputActionActivateBuff()
{
	/*if(CanUseCoin == true)
	{
		CanUseCoin = false;
		Jon->ActivateBuff();
		UBuffDebuffComponentInstance;
		GetWorldTimerManager().SetTimer(CinTimerHandle,this,&AJonPlayerController::CoinReset,CoinCoolDownTimer,false);
	}
	*/
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
	InputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &AJonPlayerController::Jump);

}

void AJonPlayerController::Jump()
{
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("Jump")));
	if(Jon->CanJump() == false)
	{
	//	return;
	}
	Jon->Jump();
}

	
