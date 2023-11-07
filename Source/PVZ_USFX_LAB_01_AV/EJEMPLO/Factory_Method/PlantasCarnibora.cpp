// Fill out your copyright notice in the Description page of Project Settings.


#include "PlantasCarnibora.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

APlantasCarnibora::APlantasCarnibora()
{

	NombrePlantas = "Carnibora";

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantasMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	
	PlantasMeshComponent->SetStaticMesh(PlantasMesh.Object);


	PlantasMeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	PlantasMeshComponent->SetSimulatePhysics(false);
	PlantasMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	RootComponent = PlantasMeshComponent;

	//PlantasBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PlantasBoxComponent"));
	/*ZombieBoxComponent->SetBoxExtent(FVector(100.0f, 100.0f, 100.0f));*/
	PlantasBoxComponent->SetHiddenInGame(false);


	PlantasMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	PlantasBoxComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	Disparar = false;


}
