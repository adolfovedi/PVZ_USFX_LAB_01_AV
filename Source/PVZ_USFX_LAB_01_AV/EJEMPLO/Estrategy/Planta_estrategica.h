// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estrategias.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/Plantas.h"
#include "Planta_estrategica.generated.h"

UCLASS()
class PVZ_USFX_LAB_01_AV_API APlanta_estrategica : public APlantas
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APlanta_estrategica();
private:
	//The current Battle Strategy
	IEstrategias* Estrategias;

	//protected:
		// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	//// Called every frame
	virtual void Tick(float DeltaTime) override;
	// 
	// Change the Maneuver and set "BattleStrategy" variable
	//----------------------Declaracion de Funciones----------------------
	void AniadirManiobres(AActor* myEstrategias);
	// Engage with the current Battle Strategy
	void RealiazarManiobres(AActor* Planta);
	void CambioHubicacion(FVector NewLocation);
	/*void AutoDestrucction();*/
	//---------------C
	void SetCambioHubicacionActivo(bool NewCambioHubicacionActivo); // Setea si el cambio de ubicación está activo o no
	int TiempoCmbioHubicacion;// Tiempo que tarda en cambiar de ubicación
	bool CambioHubicacionActivo;// Variable que indica si el cambio de ubicación está activo o no
};
