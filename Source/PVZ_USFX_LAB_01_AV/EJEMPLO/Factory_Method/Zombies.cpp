// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombies.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Plantas.h"
#include "PVZ_USFX_LAB_01_AVProjectile.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Estrategy/OrdenarZombieHorizontal.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Estrategy/OrdenarZombieVertical.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Observer/PlantasObservados.h"

// Sets default values
AZombies::AZombies()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	ZombieMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMesh"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);
	//ZombieMeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);

	//ZombieMeshComponent->BodyInstance.SetCollisionProfileName("ZombieMesh");
	//ZombieMeshComponent->OnComponentHit.AddDynamic(this, &AZombies::OnHit);
	ZombieMeshComponent->SetRelativeScale3D(FVector(1.f, 1.f, 1.f));

	ZombieMeshComponent->SetSimulatePhysics(true);
	//ZombieMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AZombiess::OnOverlapBeginFunction);		// set up a notification for when this component hits something

	RootComponent = ZombieMeshComponent;

	ZombieBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ZombieBoxComponent"));
	//ZombieBoxComponent->OnComponentEndOverlap.AddDynamic(this, &AZombies::OnOverlapEnd);
	/*ZombieBoxComponent->SetBoxExtent(FVector(100.0f, 100.0f, 100.0f));*/
	ZombieBoxComponent->SetHiddenInGame(true);
	ZombieBoxComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//SetActorHiddenInGame(true);
	//SetActorEnableCollision(false);
	SetActorTickEnabled(false);
	// Bind the overlap event
	//GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AZombieCharacter::OnZombieOverlap);


	//-----------------colisiones-------------------
	ZombieMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ZombieBoxComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);


	//-------------velocidad de movimiento del zombie
	VelocityBrickBoss = 5.0f;
	MovingX = -10;

	//cada disparo va a quitar 20 de vida
	Vida = 40;
	MoverZombie = false;

	ZombieMovido = false;
	ZombieMovido02 = false;
	ZombieMovido03 = false;
	ZombieMovido04 = false;
	ZombieMovido05 = false;

	PrimerZombieMuerto = false;
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


	if (MoverZombie)
	{
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
}

void AZombies::SetVida(float _Vida)
{
	Vida = _Vida;
}

float AZombies::GetVida()
{
	return Vida;
}

void AZombies::MorirZombie()
{

	this->Destroy();

	//Estrategias->Destroy();

}

//void AZombies::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
//{
//
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
			if (this->PrimerZombieMuerto) {
				Contenedor_Zombies.Remove(NombreZombie);
				//OrdenarZombieHorizontal->GetPrimerZombie()->PrimerZombieMuerto = true;

				GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Primer Zombie")));

			}
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Se murio")));
			this->Destroy();
		}
		Vida = Vida - 20;
	}

}

void AZombies::AniadirManiobres(AActor* myEstrategias)
{
	OrdenarZombieHorizontal = Cast<AOrdenarZombieHorizontal>(myEstrategias);
	//Try to cast the passed Strategy and set it to the current one
	Estrategias = Cast<IEstrategias>(myEstrategias);
	//Log Error if the cast failed
	if (!Estrategias)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("AlterManeuvers(): The Actor is nota BattleShipStrategy!Are you sure that the Actor implements thatinterface ? "));
	}

}

void AZombies::RealiazarManiobres(TMap<FString, AActor*> Actores)
{
	Contenedor_Zombies = Actores;
	//Log Error if the current Strategy is NULL
	if (!Estrategias) {
		UE_LOG(LogTemp, Error, TEXT("Engage():Estrategias is NULL, make sure it's initialized.")); return;
	}
	//Execute the current Strategy Maneuver
	Estrategias->Estrategias_Ataque(Contenedor_Zombies);
}

void AZombies::ColocarPlnta(AActor* Planta)
{

}

void AZombies::CastPlantaObservada(AActor* Planta)
{
		PlantaObservada = Cast<APlantasObservados>(Planta);

}


void AZombies::SetMovingX(float _MovingX)
{
	MovingX = _MovingX;
}
