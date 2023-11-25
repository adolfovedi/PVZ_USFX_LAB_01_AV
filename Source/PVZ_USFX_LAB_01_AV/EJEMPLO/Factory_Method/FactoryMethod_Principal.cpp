// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryMethod_Principal.h"
#include "GeneradorZombiesAgua.h"
#include "GeneradorZombiesTierra.h"

#include "GeneradorPlantasCuerpoAtaque.h"
#include "GeneradorPlantasRangoAtaque.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Estrategy/EstrategiaBailedefensivo.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Estrategy/EstrategiaOrdenarZombies.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Observer/Observer_Principal.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Observer/TorreLocalizacion.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Observer/PlantasObservados.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Estrategy/OrdenarZombieVertical.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Estrategy/OrdenarZombieHorizontal.h"

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


	//Aparicion del zombie abanderado
	ATorreLocalizacion* TorreLocalizacion = GetWorld()->SpawnActor<ATorreLocalizacion>(ATorreLocalizacion::StaticClass());

	//Aparicion del primer zombie que es el ansioso y definiendo su zombie como el abanderado
	APlantasObservados* PlantasObservados = GetWorld()->SpawnActor<APlantasObservados>(APlantasObservados::StaticClass(), FVector(-1000.0f, -300.0f, 200.0f), FRotator::ZeroRotator);

	PlantasObservados->DefinirPlanta(TorreLocalizacion); //Definimos la planta como el abanderado

	//Cambia el estado del zombie abanderado, para que los suscriptores ejecuten su rutina

	TorreLocalizacion->DefinirEstado("PlantaOculta"); //Cambia el estado del zombie abanderado, para que los suscriptores ejecuten su rutina


	//--------------------------------Crea los generadores de zombies--------------------------
	AGeneradorZombies* GeneradorZombiesAgua = GetWorld()->SpawnActor<AGeneradorZombiesAgua>(AGeneradorZombiesAgua::StaticClass());
	AGeneradorZombies* GeneradorZombiesTierra = GetWorld()->SpawnActor<AGeneradorZombiesTierra>(AGeneradorZombiesTierra::StaticClass());


	//Create an Outer Health Potion and log its name
	//------------------
	AZombies* Zombie;


	//----Genera una ubicación aleatoria para cada zombie
	FVector SpawnLocation = FMath::RandPointInBox(FBox(FVector(-1370, 1460, 200), FVector(-600, 140, 200)));
	FVector SpawnLocation1 = FMath::RandPointInBox(FBox(FVector(-1370, 1460, 200), FVector(-600, 140, 200)));
	FVector SpawnLocation2 = FMath::RandPointInBox(FBox(FVector(-1370, 1460, 200), FVector(-600, 140, 200)));
	FVector SpawnLocation3 = FMath::RandPointInBox(FBox(FVector(-1370, 1460, 200), FVector(-600, 140, 200)));
	FVector SpawnLocation4 = FMath::RandPointInBox(FBox(FVector(-1370, 1460, 200), FVector(-600, 140, 200)));
	FVector SpawnLocation5 = FMath::RandPointInBox(FBox(FVector(-1370, 1460, 200), FVector(-600, 140, 200)));

	// Genera un zombie en el generador de zombies de tierra con coordenadas específicas
	Zombie = GeneradorZombiesTierra->OrdenarZombies("TierraGlobo", FVector(-1500.0f, 500.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("TierraGlobo", Zombie);

	// Genera un zombie en el generador de zombies de tierra tipo "Minero" en una ubicación específica
	Zombie = GeneradorZombiesTierra->OrdenarZombies("TierraMinero", SpawnLocation1);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("TierraMinero", Zombie);

	Zombie = GeneradorZombiesTierra->OrdenarZombies("TierraSaltarin", SpawnLocation2);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("TierraSaltarin", Zombie);

	Zombie = GeneradorZombiesAgua->OrdenarZombies("AguaDelfin", SpawnLocation3);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("AguaDelfin", Zombie);

	Zombie = GeneradorZombiesAgua->OrdenarZombies("AguaFlotante", SpawnLocation4);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("AguaFlotante", Zombie);

	Zombie = GeneradorZombiesAgua->OrdenarZombies("AguaBuzo", SpawnLocation5);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("AguaBuzo", Zombie);

	//--------------------------------Crea los generadores de zombies---------------------
	//Zombie = GeneradorZombiesTierra->OrdenarZombies("MichaelJackson",FVector(-900.0f, 800.0f, 200.0f));
	//Contenedor_Actores.Add("MichaelJackson", Zombie);
	
	//--------------------------------Crea los generadores de zombies---------------------
	//AEstrategiaOrdenarZombies* EstrategiaOrdenarZombies = GetWorld()->SpawnActor<AEstrategiaOrdenarZombies>(AEstrategiaOrdenarZombies::StaticClass());
	AOrdenarZombieHorizontal* OrdenarZombieHorizontal = GetWorld()->SpawnActor<AOrdenarZombieHorizontal>(AOrdenarZombieHorizontal::StaticClass());
	//AOrdenarZombieVertical* OrdenarZombieVertical = GetWorld()->SpawnActor<AOrdenarZombieVertical>(AOrdenarZombieVertical::StaticClass());

	//----------donde pasamos el zombie para que sepa que estrategia usar-------
	Zombie->AniadirManiobres(OrdenarZombieHorizontal);
	//Engage with the current Strategy
	Zombie->RealiazarManiobres(Contenedor_Actores);

	OrdenarZombieHorizontal->CastPlanta(PlantasObservados, TorreLocalizacion);

	//--------------------------------Crea los generadores de plantas--------------------------

	AGeneradorPlantas* GeneradorPlantasCuerpoAtaque = GetWorld()->SpawnActor<AGeneradorPlantasCuerpoAtaque>(AGeneradorPlantasCuerpoAtaque::StaticClass());
	AGeneradorPlantas* GeneradorPlantasRangoAtaque = GetWorld()->SpawnActor<AGeneradorPlantasRangoAtaque>(AGeneradorPlantasRangoAtaque::StaticClass());

	//Create an Outer Health Potion and log its name

	
	//APlantas* Planta;

	//--------------------------------Crea los generadores de plantasRangoAtaque--------------------------

	//Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("HieloGuisantes", FVector(-1500.0f, -300.0f, 200.0f));
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

