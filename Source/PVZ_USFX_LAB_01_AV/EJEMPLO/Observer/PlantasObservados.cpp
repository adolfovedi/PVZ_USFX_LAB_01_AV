// Fill out your copyright notice in the Description page of Project Settings.

#include "PlantasObservados.h"
#include "TorreLocalizacion.h"
#include "Publicador.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Factory_Method/Zombies.h"
#include "DrawDebugHelpers.h"

APlantasObservados::APlantasObservados()
{
		PrimaryActorTick.bCanEverTick = true;

		TiempoEntreDisparos = 0.5f;//
}

void APlantasObservados::BeginPlay()
{
	Super::BeginPlay();
}

void APlantasObservados::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void APlantasObservados::Destroyed()
{
	Super::Destroyed();
	//Mensaje de error si el zombie no existe
	if (!TorreLocalizacion) {
		UE_LOG(LogTemp, Error, TEXT("Destroyed(): El zombie no existe, asegurate que sea inicializado."));
		return;
	}
	//Desuscribirse del publicador si el zombie es destruido
	TorreLocalizacion->DeSuscribirse(this);
}

void APlantasObservados::Actualizar(APublicador* Publicador)
{
	//Ejecuta su rutina o acciones
	CambioDestino();
}


void APlantasObservados::CambioDestino()
{
	//Mensaje de error si el zombie no existe
	if (!TorreLocalizacion) {
		UE_LOG(LogTemp, Error, TEXT("CambioDestino():El Plnta no existe, asegurate que sea inicializado."));
		return;
	}
	//Get the current time of the Clock Tower
	FString Estado = TorreLocalizacion->GetEstado();

	if (!Estado.Compare("PlantaOculta"))
	{
		//Ejecuta sus acciones estando calmado
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El estado es: %s, El Zombie lo Encontro"), *Estado));
		Disparar=false;
		//Puedes poner lo que quieras aqui
	
	}

	else if (!Estado.Compare("ZombieEncontrado"))
	{
		//Ejecuta sus acciones estando enojado
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El estado es %s, El Zombie  Encontro  "), *Estado));
		//Puedes poner lo que quieras aqui
		Disparar = true;
	}
	
}

void APlantasObservados::DefinirPlanta(ATorreLocalizacion* myTorreLocalizacion)
{
		//Mensaje de error si el zombie no existe
	if (!myTorreLocalizacion) {
		UE_LOG(LogTemp, Error, TEXT("DefinirPlanta(): El Planta no existe, asegurate que sea inicializado."));
		return;
	}
	//Suscribirse al publicador
	myTorreLocalizacion->Suscribirse(this);
	//Define el zombie de este suscriptor
	TorreLocalizacion = myTorreLocalizacion;
}

FVector APlantasObservados::GetPocisionObservador()
{

	return GetActorLocation();

}

void APlantasObservados::CastToTorreLocalizacion(AActor* Other)
{
	// Castear el actor a ATorreLocalizacion
	TorreLocalizacion = Cast<ATorreLocalizacion>(Other);
	
}


