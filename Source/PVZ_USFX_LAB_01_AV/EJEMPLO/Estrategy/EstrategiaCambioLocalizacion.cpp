// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaCambioLocalizacion.h"

// Sets default values
AEstrategiaCambioLocalizacion::AEstrategiaCambioLocalizacion()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaCambioLocalizacion::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstrategiaCambioLocalizacion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaCambioLocalizacion::Estrategias_Ataque(TMap<FString, AActor*> Actores)
{
	/*APlanta_estrategica* Planta_estrategica = Cast<APlanta_estrategica>(Planta);
	Planta_estrategica->SetCambioHubicacionActivo(true);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estrategia de CambioLocalizacion")));*/
}

