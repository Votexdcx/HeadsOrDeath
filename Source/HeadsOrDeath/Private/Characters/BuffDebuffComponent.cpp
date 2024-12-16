// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/BuffDebuffComponent.h"

#include "Characters/Jon.h"
#include "Characters/JonPlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Widgets/BuffsWidgets.h"


// Sets default values for this component's properties
UBuffDebuffComponent::UBuffDebuffComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UBuffDebuffComponent::BeginPlay()
{
	
	AjonCharacter = Cast<AJon>( GetOwner());
	JonPlayerController = Cast<AJonPlayerController>( AjonCharacter->GetController());
	Super::BeginPlay();
}


// Called every frame
void UBuffDebuffComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UBuffDebuffComponent::BuffSelectionFunc(int BuffNumber)
{
	AjonCharacter->BuffSelection = BuffNumber;
	SelectedBuff = BuffNumber;
}

///////////ACTIVATE BUFFS////////////
///////////ACTIVATE BUFFS////////////
///////////ACTIVATE BUFFS////////////
int UBuffDebuffComponent::ActivateBuff()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(DeactivateDebuffTimerHandle))
	{
		GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("DeactivateDebuffTimerHandle")));
		ResetPlayerDmg();
		ResetMovementSpeed();
		ResetDamageGiven();
		GetWorld()->GetTimerManager().ClearTimer(DeactivateDebuffTimerHandle);
	}
	if (HasBuff == false)
	{
		SelectedBuff = FMath::RandRange(0,2);
		switch (SelectedBuff)
		{
		case 0:
			MovementSpeedBuff();
			return 0;
			break;
		case 1:
			DamageBuff();
			return 1;
			break;
		case 2:
			TakeDamageReductionBuff();
			return 2;
			break;
		}
	}
	return SelectedBuff;
}

///////////ACTIVATE DEBUFFS////////////
///////////ACTIVATE DEBUFFS////////////
///////////ACTIVATE DEBUFFS////////////
int UBuffDebuffComponent::ActivateDeBuff()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(DeactivatebuffTimerHandle))
	{
		GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("DeactivatebuffTimerHandle")));
		ResetPlayerDmg();
		ResetMovementSpeed();
		ResetDamageGiven();
		GetWorld()->GetTimerManager().ClearTimer(DeactivatebuffTimerHandle);
	}
	if (HasDeBuff == false)
	{
		switch (FMath::RandRange(0,2))
		{
		case 0:
			PlayerTakesMoreDmg();
			SelectedDeBuff = 0;
			return SelectedDeBuff;
			break;
		case 1:
			MinusMovementSpeed();
			SelectedDeBuff = 1;
			return SelectedDeBuff;
			break;
		case 2:
			LessDamageGiven();
			SelectedDeBuff = 2;
			return SelectedDeBuff;
			break;
		}
	}
	return SelectedBuff;
}

int UBuffDebuffComponent::ActivateBuffPlus()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(DeactivatebuffTimerHandle) || GetWorld()->GetTimerManager().IsTimerActive(DeactivateDebuffTimerHandle) || GetWorld()->GetTimerManager().IsTimerActive(DeactivateBuffPlusTimerHandle))
	{
		GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("DeactivatebuffTimerHandle")));
		ResetPlayerDmg();
		ResetMovementSpeed();
		ResetDamageGiven();
		GetWorld()->GetTimerManager().ClearTimer(DeactivatebuffTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(DeactivateDebuffTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(DeactivateBuffPlusTimerHandle);
	}

	switch (FMath::RandRange(0,2))
	{
	case 0:
		TakeDamageReductionBuffPlus();
		SelectedBuffPlus = 0;
		return SelectedBuffPlus;
		break;
	case 1:
		MovementSpeedBuffPlus();
		SelectedBuffPlus = 1;
		return SelectedBuffPlus;
		break;
	case 2:
		DamageBuffPlus();
		SelectedBuffPlus = 2;
		return SelectedBuffPlus;
		break;
	}
	return 3;
}

///////////BUFFS////////////
///////////BUFFS////////////
///////////BUFFS////////////
void UBuffDebuffComponent::MovementSpeedBuff()
{
	HasBuff = true;
	AjonCharacter->GetCharacterMovement()->MaxWalkSpeed *= 1.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasBuff = false;
		ResetMovementSpeed();
	}, BuffTimer, false);
}

void UBuffDebuffComponent::DamageBuff()
{
	HasBuff = true;
	AjonCharacter->BaseDamage *= 1.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasBuff = false;
		ResetDamageGiven();
	},BuffTimer, false);
}

void UBuffDebuffComponent::TakeDamageReductionBuff()
{
	HasBuff = true;
	AjonCharacter->Shield = 0.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasBuff = false;
		ResetPlayerDmg();
	}, BuffTimer, false);
}

///////////BUFFS PLUS////////////
///////////BUFFS PLUS////////////
///////////BUFFS PLUS////////////
void UBuffDebuffComponent::MovementSpeedBuffPlus()
{
	HasBuffPlus = true;
	AjonCharacter->GetCharacterMovement()->MaxWalkSpeed *= 2.f;

	GetWorld()->GetTimerManager().SetTimer(DeactivateBuffPlusTimerHandle, [this]()
	{
		HasBuff = false;
		ResetMovementSpeed();
	}, BuffTimer, false);
}

void UBuffDebuffComponent::DamageBuffPlus()
{
	HasBuff = true;
	AjonCharacter->BaseDamage *= 2.0f;

	GetWorld()->GetTimerManager().SetTimer(DeactivateBuffPlusTimerHandle, [this]()
	{
		HasBuff = false;
		ResetDamageGiven();
	},BuffTimer, false);
}

void UBuffDebuffComponent::TakeDamageReductionBuffPlus()
{
	HasBuff = true;
	AjonCharacter->Shield = 0.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivateBuffPlusTimerHandle, [this]()
	{
		HasBuff = false;
		ResetPlayerDmg();
	}, BuffTimer, false);
}

///////////DEBUFFS////////////
///////////DEBUFFS////////////
///////////DEBUFFS////////////
void UBuffDebuffComponent::PlayerTakesMoreDmg()
{
	HasDeBuff = true;
	AjonCharacter->Shield = 1.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivateDebuffTimerHandle, [this]()
	{
		HasDeBuff = false;
		ResetPlayerDmg();
	}, DebuffTimer, false);
}

void UBuffDebuffComponent::MinusMovementSpeed()
{
	HasDeBuff = true;
	AjonCharacter->GetCharacterMovement()->MaxWalkSpeed *= 0.5f;
	
	GetWorld()->GetTimerManager().SetTimer(DeactivateDebuffTimerHandle, [this]()
	{
		HasDeBuff = false;
		ResetMovementSpeed();
	}, DebuffTimer, false);

}

void UBuffDebuffComponent::LessDamageGiven()
{
	HasDeBuff = true;
	AjonCharacter->BaseDamage *= 0.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivateDebuffTimerHandle, [this]()
	{
		HasDeBuff = false;
		ResetDamageGiven();
	}, DebuffTimer, false);

}

///////////RESET STATS////////////
///////////RESET STATS////////////
///////////RESET STATS////////////
void UBuffDebuffComponent::ResetPlayerDmg()
{
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("ResetPlayerDmg")));
	HasDeBuff = false;
	AjonCharacter->Shield = 1.f;
}

void UBuffDebuffComponent::ResetMovementSpeed()
{
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("ResetMovementSpeed")));
	HasDeBuff = false;
	AjonCharacter->GetCharacterMovement()->MaxWalkSpeed = AjonCharacter->MaxWalkSpeed;
}

void UBuffDebuffComponent::ResetDamageGiven()
{
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("ResetDamageGiven")));
	HasDeBuff = false;
	AjonCharacter->BaseDamage = 10.f;
}


