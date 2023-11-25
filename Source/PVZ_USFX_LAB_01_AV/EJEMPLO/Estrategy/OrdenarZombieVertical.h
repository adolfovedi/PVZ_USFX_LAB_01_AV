// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estrategias.h"
#include "OrdenarZombieVertical.generated.h"

UCLASS()
class PVZ_USFX_LAB_01_AV_API AOrdenarZombieVertical : public AActor, public IEstrategias
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOrdenarZombieVertical();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//----------------------Variables----------------------
	class AZombies* Zombies;

	//---zombiesCon es una variable que se declara como un TArray de punteros a objetos de la clase AZombies.
	TArray<AZombies*> zombiesCon;

	//TArray<FVector()> Contenedor_Posiciones;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Execute the Maneuver of this Strategy
	virtual void Estrategias_Ataque(TMap<FString, AActor*> Actores) override;

	class AZombies* PrimerZombie;
	AZombies* GetPrimerZombie();

	AZombies* ZombieMover();
	//----------------------Variables----------------------
	bool MoverZombie01;
	bool MoverZombie02;
	bool MoverZombie03;
	bool MoverZombie04;
	bool MoverZombie05;
	bool MoverZombie06;
	FVector PosicionPlanta01;

	TArray<FVector> Localizaciones;

	class AZombies* ZombieMovido;


	float _DeltaTime;
	bool CastReady;

	int cont;

	//----------------------Funciones----------------------
	void cambiarUbicacion(float _DeltaTime, int Ubi);
	void CastPlanta(AActor* Planta, AActor* Torre);
	class ATorreLocalizacion* TorreLocalizacion;
};
