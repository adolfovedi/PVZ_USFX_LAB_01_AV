// Fill out your copyright notice in the Description page of Project Settings.

#include "Observer_Principal.h"
#include "TorreLocalizacion.h"
#include "PlantasObservados.h"
// Sets default values
AObserver_Principal::AObserver_Principal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObserver_Principal::BeginPlay()
{
	Super::BeginPlay();


	//Aparicion del zombie abanderado
	ATorreLocalizacion* TorreLocalizacion = GetWorld()->SpawnActor<ATorreLocalizacion>(ATorreLocalizacion::StaticClass());

	//Aparicion del primer zombie que es el ansioso y definiendo su zombie como el abanderado
	APlantasObservados* PlantasObservados = GetWorld()->SpawnActor<APlantasObservados>(APlantasObservados::StaticClass(), FVector(-700.0f, -300.0f, 200.0f),FRotator::ZeroRotator);

	PlantasObservados->DefinirPlanta(TorreLocalizacion); //Definimos la planta como el abanderado

	//Cambia el estado del zombie abanderado, para que los suscriptores ejecuten su rutina

	TorreLocalizacion->DefinirEstado("ZombieOculto"); //Cambia el estado del zombie abanderado, para que los suscriptores ejecuten su rutina

	
	//TorreLocalizacion->DefinirEstado("ZombieEncontrado"); //Cambia el estado del zombie abanderado, para que los suscriptores ejecuten su rutina

	//TorreLocalizacion->DefinirEstado("Frenetico"); //Cambia el estado del zombie abanderado, para que los suscriptores ejecuten su rutina

	//Si hubiera otro zombie publicador y suscriptor

	//Aparicion del zombie entrenador
	//AZombieEntrenador* ZombieEntrenador = GetWorld()->SpawnActor<AZombieEntrenador>(AZombieEntrenador::StaticClass());

	//Aparicion del segundo zombie que es el corredor y definiendo su zombie como el entrenador
	//AZombieCorredor* ZombieCorredor = GetWorld()->SpawnActor<AZombieCorredor>(AZombieCorredor::StaticClass());
	//ZombieCorredor->DefinirZombie(ZombieEntrenador);

	//ZombieEntrenador->DefinirEstado("Calentando");
	//ZombieEntrenador->DefinirEstado("Carrerilla");
	//ZombieEntrenador->DefinirEstado("Cansado");

}

// Called every frame
void AObserver_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

