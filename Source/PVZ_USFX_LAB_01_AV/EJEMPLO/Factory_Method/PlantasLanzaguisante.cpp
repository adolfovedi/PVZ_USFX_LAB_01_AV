// Fill out your copyright notice in the Description page of Project Settings.


#include "PlantasLanzaguisante.h"

APlantasLanzaguisante::APlantasLanzaguisante()
{

	NombrePlantas = "Lanzaguisante";

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantasMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	PlantasMeshComponent->SetStaticMesh(PlantasMesh.Object);

}
