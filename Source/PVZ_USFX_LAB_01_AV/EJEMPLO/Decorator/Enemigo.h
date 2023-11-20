// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Enemigo.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEnemigo : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PVZ_USFX_LAB_01_AV_API IEnemigo
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//The pure virtual functions of the Enemy
	virtual void Pelear() = 0;
	virtual int GetDano() = 0;
	virtual void Morir() = 0;
};