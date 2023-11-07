// Fill out your copyright notice in the Description page of Project Settings.


#include "PlantasHipnoseta.h"

APlantasHipnoseta::APlantasHipnoseta()
{

	NombrePlantas = "Hipnoseta";

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantasMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));

	PlantasMeshComponent->SetStaticMesh(PlantasMesh.Object);

	Disparar = false;
}
