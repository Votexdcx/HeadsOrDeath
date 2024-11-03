// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/BuffDebuffComponent.h"

#include "Characters/Jon.h"
#include "Characters/JonPlayerController.h"
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
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("halfheight Value: %f"), SelectedBuff));
}

void UBuffDebuffComponent::ActivateBuff(int BuffNumber)
{
	if (FMath::RandBool())
	{
		switch (SelectedBuff)
		{
		case 0:
			Invicibility();
			break;
		case 1:
			DashResets();
			break;
		case 2:
			ExplosiveBullet();
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


void UBuffDebuffComponent::Invicibility()
{
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff: invencibilidade"), FColor::Green);
}

void UBuffDebuffComponent::DashResets()
{
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff: Dash Reset"),FColor::Green);
}

void UBuffDebuffComponent::ExplosiveBullet()
{
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Buff: Bala Explosiva"),FColor::Green);
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
	JonPlayerController->BuffsWidgets->Highlight(FText::FromString("Debuff: O jogador tem menos moviment speed"),FColor::Red);
	//GetCharacterMovement()->MaxWalkSpeed /= 1.5; 
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
