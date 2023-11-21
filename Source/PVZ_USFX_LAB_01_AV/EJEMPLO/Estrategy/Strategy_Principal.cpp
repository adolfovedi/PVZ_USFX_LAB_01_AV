// Fill out your copyright notice in the Description page of Project Settings.


#include "Strategy_Principal.h"
#include "EstrategiaCambioLocalizacion.h"
#include "EstrategiaAutodestruccion.h"
#include "EstrategiaRelentizacion.h"
#include "Planta_estrategica.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/ZombieTierraMichaelJackson.h"

// Sets default values
AStrategy_Principal::AStrategy_Principal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrategy_Principal::BeginPlay()
{
	Super::BeginPlay();

	//Enemies alert log
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("A tiny frigate wants some trouble"));
	//Spawn the Battle Ship

	APlanta_estrategica* Planta_estrategica = GetWorld()->SpawnActor<APlanta_estrategica>(APlanta_estrategica::StaticClass(), FVector(-500.0f, 0.0f, 200.0f), FRotator::ZeroRotator);

	//Create the Brute Force Strategy and set it to the Battle Ship
	AEstrategiaRelentizacion* EstrategiaRelentizacion = GetWorld()->SpawnActor<AEstrategiaRelentizacion>(AEstrategiaRelentizacion::StaticClass());

	AEstrategiaCambioLocalizacion* EstrategiaCambioLocalizacion = GetWorld()->SpawnActor<AEstrategiaCambioLocalizacion>(AEstrategiaCambioLocalizacion::StaticClass());

	AEstrategiaAutodestruccion* EstrategiaAutodestruccion = GetWorld()->SpawnActor<AEstrategiaAutodestruccion>(AEstrategiaAutodestruccion::StaticClass());

	Planta_estrategica->AniadirManiobres(EstrategiaCambioLocalizacion);
	//Engage with the current Strategy
	//--------------Realizamos la maniobra de Relentizacion-----------------
	Planta_estrategica->RealiazarManiobres(Planta_estrategica);

}

// Called every frame
void AStrategy_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

