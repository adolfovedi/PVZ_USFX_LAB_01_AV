// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAguaDelfin.h"

AZombieAguaDelfin::AZombieAguaDelfin()
{
	NombreZombie = "AguaDelfin";


	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	ZombieMeshDelfin = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMeshDelfin"));
	ZombieMeshDelfin->SetStaticMesh(ZombieMesh.Object);
	ZombieMeshDelfin->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	ZombieMeshDelfin->SetSimulatePhysics(true);
	//ZombieMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AZombiess::OnOverlapBeginFunction);		// set up a notification for when this component hits something

	RootComponent = ZombieMeshDelfin;

	// Va a morir de 4 disparos
	Vida = 100;
}
