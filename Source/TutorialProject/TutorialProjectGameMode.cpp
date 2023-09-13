// Copyright Epic Games, Inc. All Rights Reserved.

#include "TutorialProjectGameMode.h"
#include "TutorialProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATutorialProjectGameMode::ATutorialProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
