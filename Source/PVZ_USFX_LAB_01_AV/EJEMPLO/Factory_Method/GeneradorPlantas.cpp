// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorPlantas.h"

// Sets default values
AGeneradorPlantas::AGeneradorPlantas()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGeneradorPlantas::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGeneradorPlantas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APlantas* AGeneradorPlantas::OrdenarPlantas(FString Tipo, FVector Location)
{
	APlantas* Plantas = ArmarPlantas(Tipo, Location);

	return Plantas;
}
