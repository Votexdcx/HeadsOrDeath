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
	UFUNCTION(Blueprintable,BlueprintCallable)
	int ActivateDeBuffPlus();

	//Variables
	int SelectedBuff;
	int SelectedDeBuff;
	int SelectedBuffPlus;

	UPROPERTY(BlueprintReadOnly)
	bool HasBuffPlus = false;
	bool HasBuff = false;
	bool HasDeBuff = false;
	bool HasDeBuffPlus = false;
	
	float BuffTimer = 10.f;
	float DebuffTimer = 10.f;

	UPROPERTY(BlueprintReadOnly)
	bool CanPush = false;
	UPROPERTY(BlueprintReadOnly)
	bool IsEnemyExplodable = false;
private:
	FTimerHandle DeactivatebuffTimerHandle;
	FTimerHandle DeactivateDebuffTimerHandle;
	FTimerHandle DeactivateBuffPlusTimerHandle;
	FTimerHandle DeactivateDeBuffPlusTimerHandle;




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

	void Reset();
	void ResetPlayerDmg();
	void ResetMovementSpeed();
	void ResetDamageGiven();
	void ResetLowGravity();
	void ResetEnemyExplodes();
	void ResetCanPush();
	void ResetGameSpeed();
	void ResetFieldofview();
	
	//Debuffs/buffsOmega

	//void FloorIsLava();
	
	void PushEnemies();

	void LowGravity();

	void EnemyExplodes();

	void SlowDownGame();

	//debuffPlus

	void LessFieldofView();
	
	void Movedirectiondebuff();
		bool RandomDirectionBool = false;
		FVector MovedirectiondebuffLocation;


	void SwitchKeysDebuff();
		public: bool Switchkeysbool = false;
	
	///
	float* PlayerHealth;
	
	class UImage* BuffDebuffImage;
};
