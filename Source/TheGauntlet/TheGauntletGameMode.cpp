// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "TheGauntlet.h"
#include "TheGauntletGameMode.h"
#include "TheGauntletHUD.h"
#include "TheGauntletCharacter.h"

ATheGauntletGameMode::ATheGauntletGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATheGauntletHUD::StaticClass();
}
