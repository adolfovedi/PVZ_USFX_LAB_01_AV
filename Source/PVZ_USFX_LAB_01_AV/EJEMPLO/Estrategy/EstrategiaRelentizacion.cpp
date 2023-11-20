// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaRelentizacion.h"

// Sets default values
AEstrategiaRelentizacion::AEstrategiaRelentizacion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaRelentizacion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaRelentizacion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaRelentizacion::EstrategiaPlantas(AActor* Planta)
{

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estrategia de Relentizacion")));

}

