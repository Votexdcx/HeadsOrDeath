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
	void ActivateBuff();
	UFUNCTION(Blueprintable,BlueprintCallable)
	void ActivateDeBuff();

	//Variables
	int SelectedBuff;
	bool HasBuff = false;
	bool HasDeBuff = false;
	int BuffTimer = 10.f;
	int DebuffTimer = 10.f;

private:
	FTimerHandle DeactivatebuffTimerHandle;


	//Buff Functions


	//Buff effecs function

	//buffs
	void MovementSpeedBuff();
	void DamageBuff();
	void TakeDamageReductionBuff();
	
	//buffs +
	
	//Debuffs
	void PlayerTakesMoreDmg();
	void MinusMovementSpeed();
	void LessDamageGiven();
	
	//Debuffs+
	
		
};
