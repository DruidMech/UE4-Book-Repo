// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FirstGameGameMode.h"
#include "FirstGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstGameGameMode::AFirstGameGameMode()
{
	// set default pawn class to our Blueprinted character
	/*
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("Class'/Script/FirstGame.FirstPawn'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	*/
}