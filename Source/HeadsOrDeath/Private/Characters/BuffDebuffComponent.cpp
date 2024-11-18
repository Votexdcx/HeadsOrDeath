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

void UBuffDebuffComponent::ActivateBuff()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(DeactivateDebuffTimerHandle))
	{
		GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("DeactivateDebuffTimerHandle")));
		ResetPlayerDmg();
		ResetMovementSpeed();
		ResetDamageGiven();
		GetWorld()->GetTimerManager().ClearTimer(DeactivateDebuffTimerHandle);
	}
	SelectedBuff = FMath::RandRange(0,2);
	if (HasBuff == false)
	{
		switch (SelectedBuff)
		{
		case 0:
			MovementSpeedBuff();
			break;
		case 1:
			DamageBuff();
			break;
		case 2:
			TakeDamageReductionBuff();
			break;
		}
	}
}

void UBuffDebuffComponent::ActivateDeBuff()
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


void UBuffDebuffComponent::MovementSpeedBuff()
{
	HasBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff: mais speed"), FColor::Green);
	AjonCharacter->GetCharacterMovement()->MaxWalkSpeed *= 1.25f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasBuff = false;
		ResetMovementSpeed();
	}, BuffTimer, false);
}

void UBuffDebuffComponent::DamageBuff()
{
	HasBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff: mais damage"),FColor::Green);
	AjonCharacter->BaseDamage *= 1.25f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasBuff = false;
		ResetDamageGiven();
	},BuffTimer, false);
}

void UBuffDebuffComponent::TakeDamageReductionBuff()
{
	HasBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff: menos damage recebido"),FColor::Green);
	AjonCharacter->Shield = 0.75f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasBuff = false;
		ResetPlayerDmg();
	}, BuffTimer, false);
}

void UBuffDebuffComponent::PlayerTakesMoreDmg()
{
	HasDeBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("DeBuff: Player takes more damage"),FColor::Red);
	AjonCharacter->Shield = 0.75f;

	GetWorld()->GetTimerManager().SetTimer(DeactivateDebuffTimerHandle, [this]()
	{
		HasDeBuff = false;
		ResetPlayerDmg();
	}, DebuffTimer, false);
}

void UBuffDebuffComponent::MinusMovementSpeed()
{
	HasDeBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("DeBuff: menos movement speed"),FColor::Red);
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
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("DeBuff: player da menos dano"),FColor::Red);
	AjonCharacter->BaseDamage *= 0.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivateDebuffTimerHandle, [this]()
	{
		HasDeBuff = false;
		ResetDamageGiven();
	}, DebuffTimer, false);

}

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
	AjonCharacter->BaseDamage = 2.f;
}


