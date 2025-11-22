// Copyright Epic Games, Inc. All Rights Reserved.

#include "GOAPArtifactGameMode.h"
#include "GOAPArtifactCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGOAPArtifactGameMode::AGOAPArtifactGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
