// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BuffDebuffComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HEADSORDEATH_API UBuffDebuffComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UBuffDebuffComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Classes
	class AJon* AjonCharacter;
	class AJonPlayerController* JonPlayerController;



	//Functions
	UFUNCTION(Blueprintable,BlueprintCallable)
	void BuffSelectionFunc(int BuffNumber);
	UFUNCTION(Blueprintable,BlueprintCallable)
	int ActivateBuff();
	UFUNCTION(Blueprintable,BlueprintCallable)
	int ActivateDeBuff();
	UFUNCTION(Blueprintable,BlueprintCallable)
	int ActivateBuffPlus();

	//Variables
	int SelectedBuff;
	int SelectedDeBuff;
	int SelectedBuffPlus;
	
	bool HasBuffPlus = false;
	bool HasBuff = false;
	bool HasDeBuff = false;
	
	float BuffTimer = 10.f;
	float DebuffTimer = 10.f;

	UPROPERTY(BlueprintReadOnly)
	bool CanPush = true;

private:
	FTimerHandle DeactivatebuffTimerHandle;
	FTimerHandle DeactivateDebuffTimerHandle;
	FTimerHandle DeactivateBuffPlusTimerHandle;



	//Buff Functions


	//Buff effecs function

	//buffs
	void MovementSpeedBuff();
	void DamageBuff();
	void TakeDamageReductionBuff();
	
	//buffs +

	void MovementSpeedBuffPlus();
	void DamageBuffPlus();
	void TakeDamageReductionBuffPlus();
	
	//Debuffs
	void PlayerTakesMoreDmg();
	void MinusMovementSpeed();
	void LessDamageGiven();

	//resetbuffDebuff

	void ResetPlayerDmg();
	void ResetMovementSpeed();
	void ResetDamageGiven();
	void ResetLowGravity();
	
	//Debuffs/buffsOmega

	//void FloorIsLava();
	
	void PushEnemies();

	void LowGravity();
	
	float* PlayerHealth;
	
	class UImage* BuffDebuffImage;
};
