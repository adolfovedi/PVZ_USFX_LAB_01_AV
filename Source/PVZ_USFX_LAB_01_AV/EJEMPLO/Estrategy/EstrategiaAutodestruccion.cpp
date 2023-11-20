// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaAutodestruccion.h"

// Sets default values
AEstrategiaAutodestruccion::AEstrategiaAutodestruccion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaAutodestruccion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaAutodestruccion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaAutodestruccion::EstrategiaPlantas(AActor* Planta)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estrategia de Autodestruccion")));
}

