// Copyright Epic Games, Inc. All Rights Reserved.

#include "Universe_DividedGameMode.h"
#include "Universe_DividedCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUniverse_DividedGameMode::AUniverse_DividedGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
