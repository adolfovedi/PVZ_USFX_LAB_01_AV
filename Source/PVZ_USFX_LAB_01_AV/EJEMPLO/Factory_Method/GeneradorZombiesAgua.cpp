// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorZombiesAgua.h"
#include "ZombieAguaBuzo.h"
#include "ZombieAguaDelfin.h"
#include "ZombieAguaFlotante.h"


AZombies* AGeneradorZombiesAgua::ArmarZombies(FString ZombiesSKU)
{	
	FVector Location(-1500.0f, 800.0f, 200.0f);
	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
	if (ZombiesSKU.Equals("AguaBuzo")) {
		return GetWorld()->SpawnActor<AZombieAguaBuzo>(AZombieAguaBuzo::StaticClass(), FVector(-1500.0f, 800.0f, 200.0f), FRotator::ZeroRotator);
		Location = Location + FVector(200.0f, 0.0f, 0.0f);
	}

	if (ZombiesSKU.Equals("AguaDelfin")) {
		return GetWorld()->SpawnActor<AZombieAguaDelfin>(AZombieAguaDelfin::StaticClass(), FVector(-1300.0f, 800.0f, 200.0f), FRotator::ZeroRotator);
		Location = Location + FVector(200.0f, 0.0f, 0.0f);
	}

	if (ZombiesSKU.Equals("AguaFlotante")) {
		return GetWorld()->SpawnActor<AZombieAguaFlotante>(AZombieAguaFlotante::StaticClass(), FVector(-1100.0f, 800.0f, 200.0f), FRotator::ZeroRotator);
		Location = Location + FVector(200.0f, 0.0f, 0.0f);
	} 


	else return nullptr; //Returna null si el valor no es valido




}
