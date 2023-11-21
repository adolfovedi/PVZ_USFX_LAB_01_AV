// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estrategias.h"
#include "EstrategiaBailedefensivo.generated.h"
UCLASS()
class PVZ_USFX_LAB_01_AV_API AEstrategiaBailedefensivo : public AActor, public IEstrategias
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEstrategiaBailedefensivo();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//----------------------Variables----------------------
	FTimerHandle UnusedHandle;
	FVector LocationBailarinAdelante;
	FVector LocationBailarinSuperior;
	FVector LocationBailarinInferior;
	FVector LocationBailarinAtras;

	float TimeToSpawn;
	class AZombieTierraMichaelJackson* ZombieTierraMichaelJackson;
	class AZombieTierraBailarin* ZombieTierraBailarin;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Execute the Maneuver of this Strategy
	virtual void Estrategias_Ataque(TMap<FString, AActor*> Actores) override;
	void SpawmZombi();

	bool EstaPosicionOcupadaPorZombie(FVector Posicion);



};
