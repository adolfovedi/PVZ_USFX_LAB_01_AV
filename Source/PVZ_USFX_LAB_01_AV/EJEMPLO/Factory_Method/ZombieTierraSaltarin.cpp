// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieTierraSaltarin.h"

AZombieTierraSaltarin::AZombieTierraSaltarin()
{

	NombreZombie = "TierraSaltarin";

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	ZombieMeshSaltarin = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMeshSaltarin"));
	ZombieMeshSaltarin->SetStaticMesh(ZombieMesh.Object);
	ZombieMeshSaltarin->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	ZombieMeshSaltarin->SetSimulatePhysics(true);
	//ZombieMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AZombiess::OnOverlapBeginFunction);		// set up a notification for when this component hits something

	RootComponent = ZombieMeshSaltarin;

	// va a morir de 3 disparos
	Vida = 120;
}


