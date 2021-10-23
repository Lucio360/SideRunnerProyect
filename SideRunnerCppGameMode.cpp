// Copyright Epic Games, Inc. All Rights Reserved.

#include "SideRunnerCppGameMode.h"
#include "SideRunnerCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASideRunnerCppGameMode::ASideRunnerCppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
