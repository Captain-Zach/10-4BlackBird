// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasicTemplateGameMode.h"
#include "BasicTemplateCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABasicTemplateGameMode::ABasicTemplateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
