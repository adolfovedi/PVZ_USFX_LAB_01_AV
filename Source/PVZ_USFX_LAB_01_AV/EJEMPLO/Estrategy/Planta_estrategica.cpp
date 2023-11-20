// Fill out your copyright notice in the Description page of Project Settings.


#include "Planta_estrategica.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
APlanta_estrategica::APlanta_estrategica()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	NombrePlantas = "Estrategica";

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

	Disparar = true;

	TiempoCmbioHubicacion = 300.0f;
	CambioHubicacionActivo = false;
}

// Called when the game starts or when spawned
void APlanta_estrategica::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlanta_estrategica::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoCmbioHubicacion -= DeltaTime;

	if (TiempoCmbioHubicacion<=0.0f) {

		if (CambioHubicacionActivo) {
			CambioHubicacion(FVector(-700.0f, 0.0f, 200.0f));
			CambioHubicacionActivo = false;
		}
	}

}

void APlanta_estrategica::AniadirManiobres(AActor* myBattleStrategy)
{
	//Try to cast the passed Strategy and set it to the current one
	Estrategias = Cast<IEstrategias>(myBattleStrategy);
	//Log Error if the cast failed
	if (!Estrategias)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("AlterManeuvers(): The Actor is nota BattleShipStrategy!Are you sure that the Actor implements thatinterface ? "));
	}



}

void APlanta_estrategica::RealiazarManiobres(AActor* Planta)
{

	//Log Error if the current Strategy is NULL
	if (!Estrategias) {
		UE_LOG(LogTemp, Error, TEXT("Engage():Estrategias is NULL, make sure it's initialized.")); return; }
			//Execute the current Strategy Maneuver
			Estrategias->EstrategiaPlantas(Planta);

}

void APlanta_estrategica::CambioHubicacion(FVector NewLocation)
{
	SetActorLocation(NewLocation);

}

void APlanta_estrategica::SetCambioHubicacionActivo(bool NewCambioHubicacionActivo)
{
		CambioHubicacionActivo = NewCambioHubicacionActivo;
}

