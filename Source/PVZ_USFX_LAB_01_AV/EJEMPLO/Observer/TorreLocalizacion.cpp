// Fill out your copyright notice in the Description page of Project Settings.


#include "TorreLocalizacion.h"

ATorreLocalizacion::ATorreLocalizacion()
{
		PrimaryActorTick.bCanEverTick = true;
}

void ATorreLocalizacion::BeginPlay()
{
		Super::BeginPlay();
}

void ATorreLocalizacion::Tick(float DeltaTime)
{
			Super::Tick(DeltaTime);
}

void ATorreLocalizacion::EstadoCambiado()
{
	//---Cuando el estado a cambiado, este Zombie Abanderado (que es un Publicador) notifica a todos los suscriptores que el estado a cambiado
	NotificarSuscriptores();
}

void ATorreLocalizacion::DefinirEstado(FString myEstado)
{
	//----Define el estado del zombie según un parametro pasado y advierte que el estado a cambiado
	Estado = myEstado;
	EstadoCambiado();
}
