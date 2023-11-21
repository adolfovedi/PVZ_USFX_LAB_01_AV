// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAguaFlotante.h"

AZombieAguaFlotante::AZombieAguaFlotante()
{

	NombreZombie = "AguaFlotante";


	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	ZombieMeshFlotante = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMeshFlotante"));
	ZombieMeshFlotante->SetStaticMesh(ZombieMesh.Object);
	/*ZombieMeshFlotante->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	ZombieMeshFlotante->SetSimulatePhysics(true);*/
	//ZombieMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AZombiess::OnOverlapBeginFunction);		// set up a notification for when this component hits something

	RootComponent = ZombieMeshFlotante;

	// Va  a morir de 5 diparos
	Vida = 200;
}


