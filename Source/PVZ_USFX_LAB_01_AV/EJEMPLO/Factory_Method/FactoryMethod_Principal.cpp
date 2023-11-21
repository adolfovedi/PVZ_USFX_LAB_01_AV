// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryMethod_Principal.h"
#include "GeneradorZombiesAgua.h"
#include "GeneradorZombiesTierra.h"

#include "GeneradorPlantasCuerpoAtaque.h"
#include "GeneradorPlantasRangoAtaque.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Estrategy/EstrategiaBailedefensivo.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Estrategy/EstrategiaOrdenarZombies.h"

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
	//------------------
	AZombies* Zombie;


	//--------------------------------Crea los generadores de zombiesTierra--------------------------
	Zombie = GeneradorZombiesTierra->OrdenarZombies("TierraGlobo", FVector(-1500.0f, 200.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("TierraGlobo", Zombie);
	Zombie = GeneradorZombiesTierra->OrdenarZombies("TierraMinero", FVector(-1300.0f, 800.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("TierraMinero", Zombie);

	Zombie = GeneradorZombiesTierra->OrdenarZombies("TierraSaltarin", FVector(-1100.0f, 500.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("TierraSaltarin", Zombie);

	Zombie = GeneradorZombiesAgua->OrdenarZombies("AguaDelfin", FVector(-900.0f, 1000.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("AguaDelfin", Zombie);

	Zombie = GeneradorZombiesAgua->OrdenarZombies("AguaFlotante", FVector(-700.0f, 600.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("AguaFlotante", Zombie);

	Zombie = GeneradorZombiesAgua->OrdenarZombies("AguaBuzo", FVector(-500.0f, 500.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("AguaBuzo", Zombie);

	//--------------------------------Crea los generadores de zombies---------------------
	//Zombie = GeneradorZombiesTierra->OrdenarZombies("MichaelJackson",FVector(-900.0f, 800.0f, 200.0f));
	//Contenedor_Actores.Add("MichaelJackson", Zombie);

	AEstrategiaOrdenarZombies* EstrategiaOrdenarZombies = GetWorld()->SpawnActor<AEstrategiaOrdenarZombies>(AEstrategiaOrdenarZombies::StaticClass());

	//----------donde pasamos el zombie para que sepa que estrategia usar-------
	Zombie->AniadirManiobres(EstrategiaOrdenarZombies);
	//Engage with the current Strategy
	Zombie->RealiazarManiobres(Contenedor_Actores);



	//--------------------------------Crea los generadores de plantas--------------------------

	AGeneradorPlantas* GeneradorPlantasCuerpoAtaque = GetWorld()->SpawnActor<AGeneradorPlantasCuerpoAtaque>(AGeneradorPlantasCuerpoAtaque::StaticClass());
	AGeneradorPlantas* GeneradorPlantasRangoAtaque = GetWorld()->SpawnActor<AGeneradorPlantasRangoAtaque>(AGeneradorPlantasRangoAtaque::StaticClass());

	//Create an Outer Health Potion and log its name

	APlantas* Planta;

	//--------------------------------Crea los generadores de plantasRangoAtaque--------------------------

	Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("HieloGuisantes", FVector(-1500.0f, -300.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	//Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("Lanzaguisante", FVector(-700.0f, -300.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	//Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("Repetidoras", FVector(-1100.0f, -300.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	//--------------------------------Crea los generadores de plantasCuerpoAtaque--------------------------
	//Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Carnibora", FVector(-1500.0f, 0.0f, 250.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	//Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Hipnoseta", FVector(-1300.0f, 0.0f, 250.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	//Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Patatapum", FVector(-1100.0f, 0.0f, 250.0f));

	//Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Patatapum", FVector(-1100.0f, 160.0f, 250.0f));


	//Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("Repetidoras", FVector(-300.0f, 0.0f, 250.0f));
}

// Called every frame
void AFactoryMethod_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

