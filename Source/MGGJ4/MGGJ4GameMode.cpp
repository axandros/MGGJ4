// Copyright Epic Games, Inc. All Rights Reserved.

#include "MGGJ4GameMode.h"
#include "MGGJ4Character.h"
#include "UObject/ConstructorHelpers.h"

AMGGJ4GameMode::AMGGJ4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
