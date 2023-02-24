// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExperisGameSolutionGameMode.h"
#include "ExperisGameSolutionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExperisGameSolutionGameMode::AExperisGameSolutionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
