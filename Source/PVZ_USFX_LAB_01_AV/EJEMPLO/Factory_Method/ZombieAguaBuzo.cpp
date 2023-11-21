// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAguaBuzo.h"
#include "Components/StaticMeshComponent.h"

AZombieAguaBuzo::AZombieAguaBuzo()
{

	NombreZombie = "AguaBuzo";

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	ZombieMeshBuzo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMeshBuzo"));
	ZombieMeshBuzo->SetStaticMesh(ZombieMesh.Object);
	/*ZombieMeshBuzo->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	ZombieMeshBuzo->SetSimulatePhysics(true);*/
	//ZombieMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AZombiess::OnOverlapBeginFunction);		// set up a notification for when this component hits something

	RootComponent = ZombieMeshBuzo;

	// va a morir despues de 3 disparos
	Vida = 80;
}



//void AZombieAguaBuzo::Elaboracion()
//{
//	//Mensaje del tipo de elaboracion
//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando zombie Buzo"));
//
//	//Añade codigo que quieras que haga el zombie
//
//}