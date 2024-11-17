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
	else
	{
		switch (SelectedBuff)
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

void UBuffDebuffComponent::DeactivateBuff()
{
	/*  void AJon::DeactivateBuff()
	{
	GetCharacterMovement()->MaxWalkSpeed = DefaultMaxspeed;
	}
	*/
}


void UBuffDebuffComponent::MovementSpeedBuff()
{
	HasBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff: mais speed"), FColor::Green);
	AjonCharacter->GetCharacterMovement()->MaxWalkSpeed *= 1.25f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasBuff = false;
		AjonCharacter->GetCharacterMovement()->MaxWalkSpeed = AjonCharacter->MaxWalkSpeed;
	}, 10.0f, false);
}

void UBuffDebuffComponent::DamageBuff()
{
	HasBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff: mais damage"),FColor::Green);
	AjonCharacter->BaseDamage *= 1.25f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasBuff = false;
		AjonCharacter->BaseDamage = 2.f;
	}, 10.0f, false);
}

void UBuffDebuffComponent::TakeDamageReductionBuff()
{
	HasBuff = true;
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff: Bala Explosiva"),FColor::Green);
	AjonCharacter->Shield = 0.75f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
		HasBuff = false;
		AjonCharacter->Shield = 1.f;
	}, 10.0f, false);

}
void UBuffDebuffComponent::InvicibilityPlus()
{
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff+: InvicibilityPlus"), FColor::Green);
}

void UBuffDebuffComponent::DashResettimer()
{
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff+: Reset Dash Timer com cada kill"), FColor::Green);
}

void UBuffDebuffComponent::ExplosiveBullet3()
{
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("3 Balas Explosivas"), FColor::Green);
}

void UBuffDebuffComponent::PlayerTakesMoreDmg()
{
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Debuff: Jogador esta a levar mais 25% de dano"), FColor::Red);
}

void UBuffDebuffComponent::MinusMovementSpeed()
{
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Debuff: O jogadoy2r tem menos moviment speed"),FColor::Red);
	AjonCharacter->GetCharacterMovement()->MaxWalkSpeed *= 1.25f;
	//GetWorldTimerManager().SetTimer(ResetCooldownTimerHandle,this, &AJon::DeactivateBuff, 10.f, false);
}

void UBuffDebuffComponent::LessDamageGiven()
{
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Debuff: O jogador esta a dar menos dano aos enimigos"),FColor::Red);

}

void UBuffDebuffComponent::PlayerTakesEvenMoreDmg()
{
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Debuff+: o jogador esta a levar 50% mais dano"),FColor::Red);

}

void UBuffDebuffComponent::GetsStun()
{
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Debuff:+: o jogador esta stunned"),FColor::Red);

}

void UBuffDebuffComponent::LessDamageGivenPLUS()
{
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Debuff+: o jogador da menos 50% dano aos enimigos"),FColor::Red);
}
