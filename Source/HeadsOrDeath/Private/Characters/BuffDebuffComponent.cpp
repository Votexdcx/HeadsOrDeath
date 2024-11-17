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
	DebuffTimer = 0.f;
	BuffTimer = 10.f;
	HasBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff: mais speed"), FColor::Green);
	AjonCharacter->GetCharacterMovement()->MaxWalkSpeed *= 1.25f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasBuff = false;
		AjonCharacter->GetCharacterMovement()->MaxWalkSpeed = AjonCharacter->MaxWalkSpeed;
	}, BuffTimer, false);
}

void UBuffDebuffComponent::DamageBuff()
{
	DebuffTimer = 0.f;
	BuffTimer = 10.f;
	HasBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff: mais damage"),FColor::Green);
	AjonCharacter->BaseDamage *= 1.25f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasBuff = false;
		AjonCharacter->BaseDamage = 2.f;
	},BuffTimer, false);
}

void UBuffDebuffComponent::TakeDamageReductionBuff()
{
	DebuffTimer = 0.f;
	BuffTimer = 10.f;
	HasBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff: menos damage recebido"),FColor::Green);
	AjonCharacter->Shield = 0.75f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasBuff = false;
		AjonCharacter->Shield = 1.f;
	}, BuffTimer, false);

}

void UBuffDebuffComponent::PlayerTakesMoreDmg()
{
	DebuffTimer = 10.f;
	BuffTimer = 0.f;
	HasDeBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("DeBuff: Player takes more damage"),FColor::Red);
	AjonCharacter->Shield = 0.75f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasDeBuff = false;
		AjonCharacter->GetCharacterMovement()->MaxWalkSpeed = AjonCharacter->MaxWalkSpeed;
	}, DebuffTimer, false);
}

void UBuffDebuffComponent::MinusMovementSpeed()
{
	DebuffTimer = 10.f;
	BuffTimer = 0.f;
	HasDeBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("DeBuff: menos movement speed"),FColor::Red);
	AjonCharacter->GetCharacterMovement()->MaxWalkSpeed *= 0.5f;
	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasDeBuff = false;
		AjonCharacter->GetCharacterMovement()->MaxWalkSpeed = AjonCharacter->MaxWalkSpeed;
	}, DebuffTimer, false);

}

void UBuffDebuffComponent::LessDamageGiven()
{
	DebuffTimer = 10.f;
	BuffTimer = 0.f;
	HasDeBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("DeBuff: player da menos dano"),FColor::Red);
	AjonCharacter->BaseDamage *= 0.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasDeBuff = false;
		AjonCharacter->BaseDamage = 1.f;
	}, DebuffTimer, false);

}


