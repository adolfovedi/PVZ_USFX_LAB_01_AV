// Fill out your copyright notice in the Description page of Project Settings.


#include "PlantasHieloGuisantes.h"

APlantasHieloGuisantes::APlantasHieloGuisantes()
{
	NombrePlantas = "HieloGuisantes";

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantasMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));


	PlantasMeshComponent->SetStaticMesh(PlantasMesh.Object);

}