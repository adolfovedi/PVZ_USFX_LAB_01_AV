// Fill out your copyright notice in the Description page of Project Settings.


#include "Sol.h"
#include "RandomMovement.h"

// Sets default values
ASol::ASol()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshSol = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshSol"));

	//Creando un objeto para el movimiento 
	RandomMovement = CreateDefaultSubobject<URandomMovement>(TEXT("RandomMovement"));

	RootComponent = MeshSol;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));

	//Definicion del Mesh
	MeshSol->SetStaticMesh(MeshAsset.Object);
}

// Called when the game starts or when spawned
void ASol::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}