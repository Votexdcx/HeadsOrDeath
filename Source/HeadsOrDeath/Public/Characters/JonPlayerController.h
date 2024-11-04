// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "JonPlayerController.generated.h"

UCLASS()
class HEADSORDEATH_API AJonPlayerController : public APlayerController
{
	GENERATED_BODY()



public:
	class AJon* Jon;
	AJonPlayerController();
	UPROPERTY(BlueprintReadWrite)
	class UBuffsWidgets* BuffsWidgets;

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupInputComponent() override;

	//BUFF CODE
	
	//Functions
	void Buff1(float Value);
	void Buff2(float Value);
	void Buff3(float Value);
	void InputActionActivateBuff();
	void CoinReset();


	//Variables
	FTimerHandle CoinTimerHandle;
	float CoinCoolDownTimer = 10.f;
	bool CanUseCoin = true;
};
