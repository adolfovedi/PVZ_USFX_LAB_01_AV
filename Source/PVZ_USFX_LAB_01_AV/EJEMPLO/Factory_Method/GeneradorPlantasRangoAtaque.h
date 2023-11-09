// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneradorPlantas.h"
#include "GeneradorPlantasRangoAtaque.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB_01_AV_API AGeneradorPlantasRangoAtaque : public AGeneradorPlantas
{
	GENERATED_BODY()
	
public:
	//Concoct the selected potion
	virtual APlantas* ArmarPlantas(FString PlantasSKU, FVector Location) override;


};
