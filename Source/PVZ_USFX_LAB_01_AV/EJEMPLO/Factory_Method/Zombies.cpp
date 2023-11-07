// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombies.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Plantas.h"
#include "PVZ_USFX_LAB_01_AVProjectile.h"

// Sets default values
AZombies::AZombies()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	ZombieMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMesh"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);
	ZombieMeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	ZombieMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ZombieMeshComponent->BodyInstance.SetCollisionProfileName("ZombieMesh");
	//ZombieMeshComponent->OnComponentHit.AddDynamic(this, &AZombies::OnHit);
	ZombieMeshComponent->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

	ZombieMeshComponent->SetSimulatePhysics(true);
	//ZombieMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AZombiess::OnOverlapBeginFunction);		// set up a notification for when this component hits something

	RootComponent = ZombieMeshComponent;

	ZombieBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ZombieBoxComponent"));
	/*ZombieBoxComponent->SetBoxExtent(FVector(100.0f, 100.0f, 100.0f));*/
	ZombieBoxComponent->SetHiddenInGame(false);


	ZombieMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ZombieBoxComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	

	VelocityBrickBoss = 10.0f;
	MovingX = -10;
	
	//cada disparo va a quitar 20 de vida
	Vida = 40;
}

// Called when the game starts or when spawned
void AZombies::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZombies::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	const FVector MoveDirection = FVector(0.0f, MovingX, 0.0f);//dandole una direccion de movimiento , Calcular movimiento
	const FVector Movement = MoveDirection * VelocityBrickBoss * DeltaTime;// la velocidad en la que se va mover



	//Si no es de tama?o cero, mueve a este actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = FRotator(0.0f, 0.0f, 0.0f);// la rotacion de la capsula

		FHitResult Hit(1.0f);
		RootComponent->MoveComponent(Movement, NewRotation, false, &Hit);

	}

}

void AZombies::MorirZombie()
{

	this->Destroy();



}
//void AZombies::Armar()
//{
//
//	//Muestra el procedimiento de armado en pantalla
//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Armando %s"), *GetNombreZombie()));
//
//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Armando..."));
//
//}
//
//void AZombies::Elaboracion()
//{
//	//Muestra el procedimiento de elaboracion en pantalla
//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando..."));
//}
//
//void AZombies::Liberar()
//{
//	//Muestra el procedimiento de liberacion en pantalla
//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Liberando al zombie"));
//}

FString AZombies::GetNombreZombie()
{
	return NombreZombie;
}



void AZombies::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	
	APVZ_USFX_LAB_01_AVProjectile* Proyectil = Cast<APVZ_USFX_LAB_01_AVProjectile>(Other);
	if (Proyectil)
	{
		if (Vida == 0)
		{
			this->Destroy();
		}
		Vida = Vida - 20;
	}
	

}


void AZombies::SetMovingX(float _MovingX)
{
	MovingX = _MovingX;
}
