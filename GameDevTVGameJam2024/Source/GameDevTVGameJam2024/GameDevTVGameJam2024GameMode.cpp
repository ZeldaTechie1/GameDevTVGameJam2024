// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameDevTVGameJam2024GameMode.h"
#include "GameDevTVGameJam2024Character.h"
#include "UObject/ConstructorHelpers.h"

AGameDevTVGameJam2024GameMode::AGameDevTVGameJam2024GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
