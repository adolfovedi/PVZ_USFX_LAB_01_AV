// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryMethod_Principal.h"
#include "GeneradorZombiesAgua.h"
#include "GeneradorZombiesTierra.h"

#include "GeneradorPlantasCuerpoAtaque.h"
#include "GeneradorPlantasRangoAtaque.h"


// Sets default values
AFactoryMethod_Principal::AFactoryMethod_Principal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFactoryMethod_Principal::BeginPlay()
{
	Super::BeginPlay();
	

	//--------------------------------Crea los generadores de zombies--------------------------
	AGeneradorZombies* GeneradorZombiesAgua = GetWorld()->SpawnActor<AGeneradorZombiesAgua>(AGeneradorZombiesAgua::StaticClass());
	AGeneradorZombies* GeneradorZombiesTierra = GetWorld()->SpawnActor<AGeneradorZombiesTierra>(AGeneradorZombiesTierra::StaticClass());

	//Create an Outer Health Potion and log its name
	AZombies* Zombie;


	Zombie = GeneradorZombiesTierra->OrdenarZombies("TierraGlobo");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Zombie = GeneradorZombiesTierra->OrdenarZombies("TierraMinero");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Zombie = GeneradorZombiesTierra->OrdenarZombies("TierraSaltarin");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Zombie = GeneradorZombiesAgua->OrdenarZombies("AguaDelfin");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Zombie = GeneradorZombiesAgua->OrdenarZombies("AguaFlotante");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Zombie = GeneradorZombiesAgua->OrdenarZombies("AguaBuzo");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	//--------------------------------Crea los generadores de zombies--------------------------
	


	//--------------------------------Crea los generadores de plantas--------------------------

	AGeneradorPlantas* GeneradorPlantasCuerpoAtaque = GetWorld()->SpawnActor<AGeneradorPlantasCuerpoAtaque>(AGeneradorPlantasCuerpoAtaque::StaticClass());
	AGeneradorPlantas* GeneradorPlantasRangoAtaque = GetWorld()->SpawnActor<AGeneradorPlantasRangoAtaque>(AGeneradorPlantasRangoAtaque::StaticClass());

	//Create an Outer Health Potion and log its name
	APlantas* Planta;


	Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("HieloGuisantes");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("Lanzaguisante");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("Repetidoras");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Carnibora");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Hipnoseta");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Patatapum");




}

// Called every frame
void AFactoryMethod_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

