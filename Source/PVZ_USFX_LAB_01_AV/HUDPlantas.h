// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HUDPlantas.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB_01_AV_API AHUDPlantas : public AHUD
{
	GENERATED_BODY()

public:

	TSharedPtr<class SSeleccion_Plantas> WidgetSeleccion;


	TSharedPtr<class SWidget> WidgetActivo;


	virtual void BeginPlay() override;

	void QuitarHud();

	void SpawnPlanta();

	void CambioPlanta1();

	void CambioPlanta2();

	
};
