// Copyright Epic Games, Inc. All Rights Reserved.

#include "HeadsOrDeathGameMode.h"
#include "HeadsOrDeathCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHeadsOrDeathGameMode::AHeadsOrDeathGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
