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
	UFUNCTION(Blueprintable)
	void BuffSelectionFunc(int BuffNumber);
	UFUNCTION(Blueprintable)
	void ActivateBuff(int BuffNumber);
	UFUNCTION(Blueprintable)
	void DeactivateBuff();

	//Variables
	int SelectedBuff;



	//Buff Functions


	//Buff effecs function

	//buffs
	void Invicibility();
	void DashResets();
	void ExplosiveBullet();
	
	//buffs +

	void InvicibilityPlus();
	void DashResettimer();
	void ExplosiveBullet3();


	//Debuffs
	void PlayerTakesMoreDmg();
	void MinusMovementSpeed();
	void LessDamageGiven();
	
	//Debuffs+

	void PlayerTakesEvenMoreDmg();
	void GetsStun();
	void LessDamageGivenPLUS();
		
};
