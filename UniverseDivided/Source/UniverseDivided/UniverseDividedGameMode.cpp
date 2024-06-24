// Copyright Epic Games, Inc. All Rights Reserved.

#include "UniverseDividedGameMode.h"
#include "UniverseDividedCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUniverseDividedGameMode::AUniverseDividedGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
