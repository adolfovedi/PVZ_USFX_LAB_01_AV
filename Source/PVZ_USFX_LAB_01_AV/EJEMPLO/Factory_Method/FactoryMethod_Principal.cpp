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

	//--------------------------------Crea los generadores de plantasRangoAtaque--------------------------

	Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("HieloGuisantes", FVector(-900.0f, 0.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("Lanzaguisante", FVector(-700.0f, 0.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("Repetidoras", FVector(-500.0f, 0.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	//--------------------------------Crea los generadores de plantasCuerpoAtaque--------------------------
	Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Carnibora", FVector(-1500.0f, 0.0f, 250.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Hipnoseta", FVector(-1300.0f, 0.0f, 250.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Patatapum", FVector(-1100.0f, 0.0f, 250.0f));

	Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Patatapum", FVector(-1100.0f, 160.0f, 250.0f));

	Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("Repetidoras", FVector(-300.0f, 0.0f, 250.0f));
}

// Called every frame
void AFactoryMethod_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

