// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorZombiesAgua.h"
#include "ZombieAguaBuzo.h"
#include "ZombieAguaDelfin.h"
#include "ZombieAguaFlotante.h"


AZombies* AGeneradorZombiesAgua::ArmarZombies(FString ZombiesSKU, FVector Location)
{	
	
	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
	if (ZombiesSKU.Equals("AguaBuzo")) {
		return GetWorld()->SpawnActor<AZombieAguaBuzo>(AZombieAguaBuzo::StaticClass(), Location, FRotator::ZeroRotator);
		
	}

	if (ZombiesSKU.Equals("AguaDelfin")) {
		return GetWorld()->SpawnActor<AZombieAguaDelfin>(AZombieAguaDelfin::StaticClass(), Location, FRotator::ZeroRotator);
		
	}

	if (ZombiesSKU.Equals("AguaFlotante")) {
		return GetWorld()->SpawnActor<AZombieAguaFlotante>(AZombieAguaFlotante::StaticClass(), Location, FRotator::ZeroRotator);
		
	} 


	else return nullptr; //Returna null si el valor no es valido




}
