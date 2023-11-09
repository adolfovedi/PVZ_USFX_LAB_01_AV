// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorPlantasRangoAtaque.h"
#include "PlantasHieloGuisantes.h"
#include "PlantasLanzaguisante.h"
#include "PlantasRepetidoras.h"

APlantas* AGeneradorPlantasRangoAtaque::ArmarPlantas(FString PlantasSKU, FVector Location)
{
	
	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
	if (PlantasSKU.Equals("HieloGuisantes")) {
		return GetWorld()->SpawnActor<APlantasHieloGuisantes>(APlantasHieloGuisantes::StaticClass(), Location, FRotator::ZeroRotator);
		
	}

	if (PlantasSKU.Equals("Lanzaguisante")) {
		return GetWorld()->SpawnActor<APlantasLanzaguisante>(APlantasLanzaguisante::StaticClass(), Location, FRotator::ZeroRotator);
		
	}

	if (PlantasSKU.Equals("Repetidoras")) {
		return GetWorld()->SpawnActor<APlantasRepetidoras>(APlantasRepetidoras::StaticClass(), Location, FRotator::ZeroRotator);
		
	}


	else return nullptr; //Returna null si el valor no es valido

    return nullptr;
}
