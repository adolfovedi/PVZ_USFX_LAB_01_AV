// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plantas.h"
#include "GeneradorPlantas.generated.h"

UCLASS()
class PVZ_USFX_LAB_01_AV_API AGeneradorPlantas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeneradorPlantas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Crea un zombie y lo devuelve.es una funciona virtual pura así que no necesita implementacion
    virtual APlantas* ArmarPlantas(FString PlantasSKU,FVector Location) PURE_VIRTUAL(AGeneradorPlantas::ArmarPlantas, return nullptr;);

	//Ordena, arma y devuelve un zombie
	APlantas* OrdenarPlantas(FString Tipo, FVector Location);

};
