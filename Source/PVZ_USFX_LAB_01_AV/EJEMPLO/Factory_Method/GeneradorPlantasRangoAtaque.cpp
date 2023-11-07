// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorPlantasRangoAtaque.h"
#include "PlantasHieloGuisantes.h"
#include "PlantasLanzaguisante.h"
#include "PlantasRepetidoras.h"

APlantas* AGeneradorPlantasRangoAtaque::ArmarPlantas(FString PlantasSKU)
{
	FVector Location(-1500.0f, 800.0f, 200.0f);
	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
	if (PlantasSKU.Equals("HieloGuisantes")) {
		return GetWorld()->SpawnActor<APlantasHieloGuisantes>(APlantasHieloGuisantes::StaticClass(), FVector(-900.0f, 0.0f, 200.0f), FRotator::ZeroRotator);
		Location = Location + FVector(200.0f, 0.0f, 0.0f);
	}

	if (PlantasSKU.Equals("Lanzaguisante")) {
		return GetWorld()->SpawnActor<APlantasLanzaguisante>(APlantasLanzaguisante::StaticClass(), FVector(-700.0f, 0.0f, 200.0f), FRotator::ZeroRotator);
		Location = Location + FVector(200.0f, 0.0f, 0.0f);
	}

	if (PlantasSKU.Equals("Repetidoras")) {
		return GetWorld()->SpawnActor<APlantasRepetidoras>(APlantasRepetidoras::StaticClass(), FVector(-500.0f, 0.0f, 200.0f), FRotator::ZeroRotator);
		Location = Location + FVector(200.0f, 0.0f, 0.0f);
	}


	else return nullptr; //Returna null si el valor no es valido

    return nullptr;
}
