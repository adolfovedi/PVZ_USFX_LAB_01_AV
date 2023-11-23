// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Factory_Method/Plantas.h"
#include "Suscriptor.h"
#include "CambioDestino.h"
#include "PlantasObservados.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB_01_AV_API APlantasObservados : public APlantas, public ISuscriptor, public ICambioDestino
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APlantasObservados();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//El zombie de este suscriptor

	UPROPERTY()
		class ATorreLocalizacion* TorreLocalizacion;
		


public:
	//Llamado cuando el suscriptor es destruido
	virtual void Destroyed() override;
	//Llamado cuando el publicador cambia su estado para ejecutar su rutina
	virtual void Actualizar(class APublicador* Publicador) override;
	//Ejecuta la rutina de este suscriptor
	virtual void CambioDestino();
	//Define el zombie de este suscriptor
	void DefinirPlanta(ATorreLocalizacion* myZombieAbanderado);

	FVector GetPocisionObservador();
	void CastToTorreLocalizacion(AActor* Other);
	//class ATorreLocalizacion* TorreLocalizacion;

};
