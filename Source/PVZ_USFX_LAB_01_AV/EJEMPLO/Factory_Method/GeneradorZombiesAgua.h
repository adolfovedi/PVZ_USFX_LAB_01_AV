// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneradorZombies.h"
#include "GeneradorZombiesAgua.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB_01_AV_API AGeneradorZombiesAgua : public AGeneradorZombies
{
	GENERATED_BODY()
	

public:
	//Concoct the selected potion
	virtual AZombies* ArmarZombies(FString ZombiesSKU, FVector Location) override;

};
