// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FactoryMethod_Principal.generated.h"

UCLASS()
class PVZ_USFX_LAB_01_AV_API AFactoryMethod_Principal : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFactoryMethod_Principal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TMap<FString, AActor*> Contenedor_Actores;
	TArray<class AZombies*> Contenedor_Zombies;
	float TiempoCambio;
	bool CambioEstrategia;
	bool EstrategiaVertical;
	bool EstrategiaHorizontal;
	class AZombies* Zombie;
	class ATorreLocalizacion* TorreLocalizacion;
	class APlantasObservados* PlantasObservados;
	class AOrdenarZombieVertical* OrdenarZombieVertical;
	AZombies* ZombieMover();
	class AZombies* PrimerZombie;
	bool aux01;
	bool aux02;





};
