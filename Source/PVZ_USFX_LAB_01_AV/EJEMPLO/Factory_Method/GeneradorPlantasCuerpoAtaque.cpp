// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorPlantasCuerpoAtaque.h"
#include "PlantasCarnibora.h"
#include "PlantasHipnoseta.h"
#include "PlantasPatatapum.h"

APlantas* AGeneradorPlantasCuerpoAtaque::ArmarPlantas(FString PlantasSKU, FVector Location)
{

	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
	if (PlantasSKU.Equals("Carnibora")) {
		return GetWorld()->SpawnActor<APlantasCarnibora>(APlantasCarnibora::StaticClass(), Location, FRotator::ZeroRotator);
		
	}

	if (PlantasSKU.Equals("Hipnoseta")) {
		return GetWorld()->SpawnActor<APlantasHipnoseta>(APlantasHipnoseta::StaticClass(), Location, FRotator::ZeroRotator);
		
	}

	if (PlantasSKU.Equals("Patatapum")) {
		return GetWorld()->SpawnActor<APlantasPatatapum>(APlantasPatatapum::StaticClass(), Location, FRotator::ZeroRotator);
	
	}



	else return nullptr; //Returna null si el valor no es valido


}
