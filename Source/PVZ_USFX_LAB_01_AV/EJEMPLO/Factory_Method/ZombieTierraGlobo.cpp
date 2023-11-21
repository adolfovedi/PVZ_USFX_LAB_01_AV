// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieTierraGlobo.h"



AZombieTierraGlobo::AZombieTierraGlobo()
{

	NombreZombie = "TierraGoblo";



	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	ZombieMeshGlobo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMeshGlobo"));
	ZombieMeshGlobo->SetStaticMesh(ZombieMesh.Object);
	/*ZombieMeshGlobo->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	ZombieMeshGlobo->SetSimulatePhysics(true);*/
	//ZombieMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AZombiess::OnOverlapBeginFunction);		// set up a notification for when this component hits something

	RootComponent = ZombieMeshGlobo;

	// va a morir de 2 disparos
	Vida = 300;
}

//void AZombieTierraGlobo::Elaboracion()
//{
//
//	//Mensaje del tipo de elaboracion
//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando zombie en globo"));
//
//	//Añade codigo que quieras que haga el zombie
//
//
//
//}