// Copyright Epic Games, Inc. All Rights Reserved.

#include "MicroJam16GameMode.h"
#include "MicroJam16Character.h"
#include "UObject/ConstructorHelpers.h"

AMicroJam16GameMode::AMicroJam16GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
