// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Estrategias.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstrategias : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PVZ_USFX_LAB_01_AV_API IEstrategias
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//The pure virtual functions of the BattleShipStrategy
	virtual void EstrategiaPlantas(AActor* Planta) = 0;

};
