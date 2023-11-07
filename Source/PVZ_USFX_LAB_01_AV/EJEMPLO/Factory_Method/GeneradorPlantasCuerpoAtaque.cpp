// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorPlantasCuerpoAtaque.h"
#include "PlantasCarnibora.h"
#include "PlantasHipnoseta.h"
#include "PlantasPatatapum.h"

APlantas* AGeneradorPlantasCuerpoAtaque::ArmarPlantas(FString PlantasSKU)
{

	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
	if (PlantasSKU.Equals("Carnibora")) {
		return GetWorld()->SpawnActor<APlantasCarnibora>(APlantasCarnibora::StaticClass(), FVector(-1500.0f, 0.0f, 250.0f), FRotator::ZeroRotator);
		
	}

	if (PlantasSKU.Equals("Hipnoseta")) {
		return GetWorld()->SpawnActor<APlantasHipnoseta>(APlantasHipnoseta::StaticClass(), FVector(-1300.0f, 0.0f, 200.0f), FRotator::ZeroRotator);
		
	}

	if (PlantasSKU.Equals("Patatapum")) {
		return GetWorld()->SpawnActor<APlantasPatatapum>(APlantasPatatapum::StaticClass(), FVector(-1100.0f, 0.0f, 200.0f), FRotator::ZeroRotator);
	
	}


	else return nullptr; //Returna null si el valor no es valido


}
