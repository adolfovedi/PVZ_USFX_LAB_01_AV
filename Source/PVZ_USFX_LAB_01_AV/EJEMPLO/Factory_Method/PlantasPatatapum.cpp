// Fill out your copyright notice in the Description page of Project Settings.


#include "PlantasPatatapum.h"

APlantasPatatapum::APlantasPatatapum()
{


	NombrePlantas = "Patatapum";

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantasMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	PlantasMeshComponent->SetStaticMesh(PlantasMesh.Object);

	Disparar = false;

}
