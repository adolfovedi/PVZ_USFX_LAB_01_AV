// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorZombiesTierra.h"
#include "ZombieTierraGlobo.h"
#include "ZombieTierraMinero.h"
#include "ZombieTierraSaltarin.h"
#include "ZombieTierraMichaelJackson.h"


AZombies* AGeneradorZombiesTierra::ArmarZombies(FString ZombiesSKU, FVector Location)
{
	
	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
	if (ZombiesSKU.Equals("TierraGlobo")) {
		return GetWorld()->SpawnActor<AZombieTierraGlobo>(AZombieTierraGlobo::StaticClass(), Location, FRotator::ZeroRotator);
		
	}
	else if (ZombiesSKU.Equals("TierraMinero")) {
		return GetWorld()->SpawnActor<AZombieTierraMinero>(AZombieTierraMinero::StaticClass(), Location, FRotator::ZeroRotator);
		
	}
	else if (ZombiesSKU.Equals("TierraSaltarin")) {
		return GetWorld()->SpawnActor<AZombieTierraSaltarin>(AZombieTierraSaltarin::StaticClass(), Location, FRotator::ZeroRotator);
	
	}
	else if (ZombiesSKU.Equals("MichaelJackson")) {
		return GetWorld()->SpawnActor<AZombieTierraMichaelJackson>(AZombieTierraMichaelJackson::StaticClass(), Location, FRotator::ZeroRotator);

	}

	else return nullptr; //Returna null si el valor no es valido

}
