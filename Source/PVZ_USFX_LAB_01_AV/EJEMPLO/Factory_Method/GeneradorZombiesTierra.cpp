// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorZombiesTierra.h"
#include "ZombieTierraGlobo.h"
#include "ZombieTierraMinero.h"
#include "ZombieTierraSaltarin.h"


AZombies* AGeneradorZombiesTierra::ArmarZombies(FString ZombiesSKU)
{
	FVector Location(-900.0f, 800.0f, 200.0f);
	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
	if (ZombiesSKU.Equals("TierraGlobo")) {
		return GetWorld()->SpawnActor<AZombieTierraGlobo>(AZombieTierraGlobo::StaticClass(), FVector(-900.0f,800.0f,200.0f), FRotator::ZeroRotator);
		Location = Location + FVector(200.0f, 0.0f, 0.0f);
	}
	else if (ZombiesSKU.Equals("TierraMinero")) {
		return GetWorld()->SpawnActor<AZombieTierraMinero>(AZombieTierraMinero::StaticClass(), FVector(-700.0f, 800.0f, 200.0f), FRotator::ZeroRotator);
		Location = Location + FVector(200.0f, 0.0f, 0.0f);
	}
	else if (ZombiesSKU.Equals("TierraSaltarin")) {
		return GetWorld()->SpawnActor<AZombieTierraSaltarin>(AZombieTierraSaltarin::StaticClass(), FVector(-500.0f, 800.0f, 200.0f), FRotator::ZeroRotator);
		Location = Location + FVector(200.0f, 0.0f, 0.0f);
	}

	else return nullptr; //Returna null si el valor no es valido

}
