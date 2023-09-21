// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_USFX_LAB_01_AVGameMode.h"
#include "PVZ_USFX_LAB_01_AVPawn.h"

APVZ_USFX_LAB_01_AVGameMode::APVZ_USFX_LAB_01_AVGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APVZ_USFX_LAB_01_AVPawn::StaticClass();
}

