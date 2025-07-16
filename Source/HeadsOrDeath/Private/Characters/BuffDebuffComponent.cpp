// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/BuffDebuffComponent.h"

#include "Camera/CameraComponent.h"
#include "Characters/Jon.h"
#include "Characters/JonPlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Widgets/BuffsWidgets.h"


// Sets default values for this component's properties
UBuffDebuffComponent::UBuffDebuffComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UBuffDebuffComponent::BeginPlay()
{
	Super::BeginPlay();

	AjonCharacter = Cast<AJon>(GetOwner());
	if (!IsValid(AjonCharacter)) return;

	JonPlayerController = Cast<AJonPlayerController>(AjonCharacter->GetController());
	if (!IsValid(JonPlayerController)) return;

	PlayerHealth = &AjonCharacter->PlayerHealth;
}


// Called every frame
void UBuffDebuffComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (RandomDirectionBool == true)
	{
		AjonCharacter->AddMovementInput(MovedirectiondebuffLocation,1,false);
	}
}

void UBuffDebuffComponent::BuffSelectionFunc(int BuffNumber)
{
	if (AjonCharacter == nullptr)
	{
		return;
	}
	AjonCharacter->BuffSelection = BuffNumber;
	SelectedBuff = BuffNumber;
}

///////////ACTIVATE BUFFS////////////
///////////ACTIVATE BUFFS////////////
///////////ACTIVATE BUFFS////////////
int UBuffDebuffComponent::ActivateBuff()
{
	if(true)
	{
		if (PlayerHealth != nullptr)
		{
			//*PlayerHealth -= 1 * GetWorld()->GetDeltaSeconds();
		}
	}
	if (HasBuffPlus == true || HasDeBuffPlus == true)
	{
		return 10;
	}
	if (GetWorld()->GetTimerManager().IsTimerActive(DeactivateDebuffTimerHandle))
	{
		GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("DeactivateDebuffTimerHandle")));
		Reset();
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
	if (HasBuffPlus == true || HasDeBuffPlus == true)
	{
		return 10;
	}
	if (GetWorld()->GetTimerManager().IsTimerActive(DeactivatebuffTimerHandle))
	{
		GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("DeactivatebuffTimerHandle")));
		Reset();
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
	if (GetWorld()->GetTimerManager().IsTimerActive(DeactivatebuffTimerHandle) || GetWorld()->GetTimerManager().IsTimerActive(DeactivateDebuffTimerHandle) || GetWorld()->GetTimerManager().IsTimerActive(DeactivateBuffPlusTimerHandle)|| GetWorld()->GetTimerManager().IsTimerActive(DeactivateDeBuffPlusTimerHandle))
	{
		GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("DeactivatebuffTimerHandle")));
		Reset();
		GetWorld()->GetTimerManager().ClearTimer(DeactivatebuffTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(DeactivateDebuffTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(DeactivateBuffPlusTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(DeactivateDebuffTimerHandle);

	}

	switch (FMath::RandRange(0,6))
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
	case 3:
		LowGravity();
		SelectedBuffPlus = 3;
		return SelectedBuffPlus;
		break;
		
	case 4:
		EnemyExplodes();
		SelectedBuffPlus = 4;
		return SelectedBuffPlus;
		break;
		
	case 5:
		PushEnemies();
		SelectedBuffPlus = 5;
		return SelectedBuffPlus;
		break;

	case 6:
		SlowDownGame();
		SelectedBuffPlus = 6;
		return SelectedBuffPlus;
		break;
	}
	
	return 7;
}

int UBuffDebuffComponent::ActivateDeBuffPlus()
{
	if (GetWorld()->GetTimerManager().IsTimerActive(DeactivatebuffTimerHandle) || GetWorld()->GetTimerManager().IsTimerActive(DeactivateDebuffTimerHandle) || GetWorld()->GetTimerManager().IsTimerActive(DeactivateBuffPlusTimerHandle)|| GetWorld()->GetTimerManager().IsTimerActive(DeactivateDeBuffPlusTimerHandle))
	{
		GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("DeactivatebuffTimerHandle")));
		Reset();
		GetWorld()->GetTimerManager().ClearTimer(DeactivatebuffTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(DeactivateDebuffTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(DeactivateBuffPlusTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(DeactivateDeBuffPlusTimerHandle);
	}

	switch (FMath::RandRange(0,2))
	{
	case 0:
		LessFieldofView();
		SelectedBuffPlus = 0;
		return SelectedBuffPlus;
		break;

	case 1:
		Movedirectiondebuff();
		SelectedBuffPlus = 1;
		return SelectedBuffPlus;
		break;
		
	case 2:
		SwitchKeysDebuff();
		SelectedBuffPlus = 2;
		return SelectedBuffPlus;
		break;
	}
	
	return 7;
}

void UBuffDebuffComponent::ChangeScene()
{
	if (AjonCharacter == nullptr || GetWorld() == nullptr)
	{
		return;
	}
	Reset();
	// Clear all timers associated with this component
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
	}
}

///////////BUFFS////////////
///////////BUFFS////////////
///////////BUFFS////////////
void UBuffDebuffComponent::MovementSpeedBuff()
{
	HasBuff = true;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	AjonCharacter->GetCharacterMovement()->MaxWalkSpeed *= 1.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasBuff = false;
		Reset();
	}, BuffTimer, false);
}

void UBuffDebuffComponent::DamageBuff()
{
	HasBuff = true;
	if (AjonCharacter == nullptr)
    	{
    		return;
    	}
	AjonCharacter->BaseDamage *= 1.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasBuff = false;
		Reset();
	},BuffTimer, false);
}

void UBuffDebuffComponent::TakeDamageReductionBuff()
{
	HasBuff = true;
	if (AjonCharacter == nullptr)
    	{
    		return;
    	}
	AjonCharacter->Shield = 0.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivatebuffTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasBuff = false;
		Reset();
	}, BuffTimer, false);
}

///////////BUFFS PLUS////////////
///////////BUFFS PLUS////////////
///////////BUFFS PLUS////////////

void UBuffDebuffComponent::SlowDownGame()
{
	HasBuffPlus = true;
	HasBuff = true;
	if (AjonCharacter == nullptr)
	{
		return;
	}

	UGameplayStatics::SetGlobalTimeDilation(GetWorld(),0.5f);
	AjonCharacter->CustomTimeDilation = 2.f;

	GetWorld()->GetTimerManager().SetTimer(DeactivateBuffPlusTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasBuffPlus = false;
		HasBuff = false;
		Reset();
	}, BuffTimer, false);
}


void UBuffDebuffComponent::MovementSpeedBuffPlus()
{
	HasBuffPlus = true;
	HasBuff = true;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	AjonCharacter->GetCharacterMovement()->MaxWalkSpeed *= 2.f;

	GetWorld()->GetTimerManager().SetTimer(DeactivateBuffPlusTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasBuffPlus = false;
		HasBuff = false;
		Reset();
	}, BuffTimer, false);
}

void UBuffDebuffComponent::DamageBuffPlus()
{
	HasBuffPlus = true;
	HasBuff = true;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	AjonCharacter->BaseDamage *= 2.0f;

	GetWorld()->GetTimerManager().SetTimer(DeactivateBuffPlusTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasBuffPlus = false;
		HasBuff = false;
		Reset();
	},BuffTimer, false);
}

void UBuffDebuffComponent::TakeDamageReductionBuffPlus()
{
	HasBuffPlus = true;
	HasBuff = true;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	AjonCharacter->Shield = 0.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivateBuffPlusTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasBuffPlus = false;
		HasBuff = false;
		Reset();
	}, BuffTimer, false);
}

void UBuffDebuffComponent::LowGravity()
{
	HasBuffPlus = true;
	HasBuff = true;
	if (AjonCharacter == nullptr)
	{
		return;
	}

	AjonCharacter->GetCharacterMovement()->GravityScale = 0.2f;
    AjonCharacter->GetCharacterMovement()->AirControl = 1.f;
	
	GetWorld()->GetTimerManager().SetTimer(DeactivateBuffPlusTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasBuffPlus = false;
		HasBuff = false;
		Reset();
	},BuffTimer, false);
}

void UBuffDebuffComponent::EnemyExplodes()
{
	HasBuffPlus = true;
	HasBuff = true;
	if (AjonCharacter == nullptr)
	{
		return;
	}

	IsEnemyExplodable = true;
	
	GetWorld()->GetTimerManager().SetTimer(DeactivateBuffPlusTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasBuffPlus = false;
		HasBuff = false;
		Reset();
	},BuffTimer, false);
	
}

void UBuffDebuffComponent::PushEnemies()
{
	HasBuffPlus = true;
	HasBuff = true;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	CanPush = true;
	GetWorld()->GetTimerManager().SetTimer(DeactivateBuffPlusTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasBuffPlus = false;
		HasBuff = false;
		Reset();
	},BuffTimer, false);
	
}

///////////DEBUFFS////////////
///////////DEBUFFS////////////
///////////DEBUFFS////////////
void UBuffDebuffComponent::PlayerTakesMoreDmg()
{
	HasDeBuff = true;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	AjonCharacter->Shield = 1.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivateDebuffTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasDeBuff = false;
		Reset();
	}, DebuffTimer, false);
}

void UBuffDebuffComponent::MinusMovementSpeed()
{
	HasDeBuff = true;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	AjonCharacter->GetCharacterMovement()->MaxWalkSpeed *= 0.5f;
	
	GetWorld()->GetTimerManager().SetTimer(DeactivateDebuffTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasDeBuff = false;
		Reset();
	}, DebuffTimer, false);

}

void UBuffDebuffComponent::LessDamageGiven()
{
	HasDeBuff = true;
	if (AjonCharacter == nullptr)
    {
    	return;
    }
	AjonCharacter->BaseDamage *= 0.5f;

	GetWorld()->GetTimerManager().SetTimer(DeactivateDebuffTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasDeBuff = false;
		Reset();
	}, DebuffTimer, false);

}

void UBuffDebuffComponent::Reset()
{
	if (GetWorld() == nullptr || AjonCharacter == nullptr)
	{
		return;
	}
	
	 ResetPlayerDmg();
	 ResetMovementSpeed();
	 ResetDamageGiven();
	 ResetLowGravity();
	 ResetEnemyExplodes();
	 ResetCanPush();
	 ResetGameSpeed();
	 ResetFieldofview();
	 RandomDirectionBool = false;
	 Switchkeysbool = false;
}

///////////RESET STATS////////////
///////////RESET STATS////////////
///////////RESET STATS////////////
void UBuffDebuffComponent::ResetPlayerDmg()
{
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("ResetPlayerDmg")));
	HasDeBuff = false;
	if (AjonCharacter == nullptr)
    	{
    		return;
    	}
	AjonCharacter->Shield = 1.f;
}

void UBuffDebuffComponent::ResetMovementSpeed()
{
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("ResetMovementSpeed")));
	HasDeBuff = false;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	AjonCharacter->GetCharacterMovement()->MaxWalkSpeed = 1000;
}

void UBuffDebuffComponent::ResetDamageGiven()
{
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("ResetDamageGiven")));
	HasDeBuff = false;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	AjonCharacter->BaseDamage = 10.f;
}

void UBuffDebuffComponent::ResetLowGravity()
{
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("ResetDamageGiven")));
	HasDeBuff = false;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	AjonCharacter->GetCharacterMovement()->GravityScale = 1.f;
	AjonCharacter->GetCharacterMovement()->AirControl = 0.5f;
}

void UBuffDebuffComponent::ResetEnemyExplodes()
{
	
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("Resetenemyexplodes")));
	HasDeBuff = false;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	IsEnemyExplodable = false;

}

void UBuffDebuffComponent::ResetCanPush()
{
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("Resetenemyexplodes")));
	HasDeBuff = false;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	CanPush = false;
}

void UBuffDebuffComponent::ResetGameSpeed()
{
	GEngine->AddOnScreenDebugMessage(1,10.f,FColor::Black,FString::Printf(TEXT("ResetGameSpeed")));
	HasDeBuff = false;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	UGameplayStatics::SetGlobalTimeDilation(GetWorld(),1.f);
	AjonCharacter->CustomTimeDilation = 1.f;
}


///Debuffplus
void UBuffDebuffComponent::LessFieldofView()
{
	HasDeBuff = true;
	HasDeBuffPlus = true;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	AjonCharacter->CameraReal->FieldOfView = 40.f;
	GetWorld()->GetTimerManager().SetTimer(DeactivateBuffPlusTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

		HasDeBuff = false;
		HasDeBuffPlus = false;
		Reset();
	},BuffTimer, false);
}

void UBuffDebuffComponent::Movedirectiondebuff()
{
	HasDeBuff = true;
	HasDeBuffPlus = true;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	RandomDirectionBool = true;
	GetrandomLocation();
	GetWorld()->GetTimerManager().SetTimer(GetRandomDirection, [this]()
    {
		GetrandomLocation();
    },3, false);
	GetWorld()->GetTimerManager().SetTimer(DeactivateBuffPlusTimerHandle, [this]()
	{
			if (!IsValid(this)) return;

	RandomDirectionBool = false;
	HasDeBuff = false;
	HasDeBuffPlus = false;
	},BuffTimer, false);
}

void UBuffDebuffComponent::GetrandomLocation()
{
	MovedirectiondebuffLocation = FVector(FMath::FRand(),FMath::FRand(),0);
	GetWorld()->GetTimerManager().SetTimer(GetRandomDirection, [this]()
	{
			if (!IsValid(this)) return;

		if(RandomDirectionBool == false)
		{
			return;
		}
		GetrandomLocation();
	},3, false);
}

void UBuffDebuffComponent::SwitchKeysDebuff()
{
	HasDeBuff = true;
	HasDeBuffPlus = true;
	if (AjonCharacter == nullptr)
	{
		return;
	}
	Switchkeysbool = true;
	MovedirectiondebuffLocation = FVector(FMath::FRand(),FMath::FRand(),0);
	GetWorld()->GetTimerManager().SetTimer(DeactivateBuffPlusTimerHandle, [this]()
	{
		Switchkeysbool = false;
		HasDeBuff = false;
		HasDeBuffPlus = false;
	},BuffTimer, false);
}

void UBuffDebuffComponent::ResetFieldofview()
{
	GEngine->AddOnScreenDebugMessage(1, 10.f, FColor::Black, TEXT("ResetFieldOfView"));

	HasDeBuffPlus = false;

	// First check if this component is valid and still part of a live actor
	if (!IsValid(this) || !GetOwner() || !GetWorld())
	{
		return;
	}

	// Safely get the character reference
	AJon* JonCharacter = Cast<AJon>(GetOwner());
	if (!IsValid(JonCharacter))
	{
		return;
	}

	// Validate the camera component
	if (!IsValid(JonCharacter->CameraReal))
	{
		UE_LOG(LogTemp, Warning, TEXT("CameraReal is null in ResetFieldofview"));
		return;
	}

	// Finally safe to modify FOV
	JonCharacter->CameraReal->FieldOfView = 90.f;
}

void UBuffDebuffComponent::BeginDestroy()
{

	Super::BeginDestroy();
}




