// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieTierraMinero.h"

AZombieTierraMinero::AZombieTierraMinero()
{

	NombreZombie = "TierraMinero";



	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	ZombieMeshMinero = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMeshMinero"));
	ZombieMeshMinero->SetStaticMesh(ZombieMesh.Object);
	//ZombieMeshMinero->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	//ZombieMeshMinero->SetSimulatePhysics(true);
	//ZombieMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AZombiess::OnOverlapBeginFunction);		// set up a notification for when this component hits something

	RootComponent = ZombieMeshMinero;

	// va a morir de 1 disparo
	Vida = 360;
}





//void AZombieTierraMinero::Elaboracion()
//{
//	//Mensaje del tipo de elaboracion
//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando zombie minero"));
//
//	//Añade codigo que quieras que haga el zombie
//
//
//}