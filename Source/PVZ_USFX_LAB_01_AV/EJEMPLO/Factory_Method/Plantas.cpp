// Fill out your copyright notice in the Description page of Project Settings.


#include "Plantas.h"
#include "Zombies.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "PVZ_USFX_LAB_01_AVProjectile.h"
// Sets default values
APlantas::APlantas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantasMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

	PlantasMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantasMesh"));
	//PlantMeshComponent->SetStaticMesh(PlantMesh.Object);
	//PlantMeshComponent->SetCollisionProfileName(TEXT("Ignore"));
	PlantasMeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	PlantasMeshComponent->SetSimulatePhysics(false);
	PlantasMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	RootComponent = PlantasMeshComponent;

	PlantasBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PlantasBoxComponent"));
	/*ZombieBoxComponent->SetBoxExtent(FVector(100.0f, 100.0f, 100.0f));*/
	PlantasBoxComponent->SetHiddenInGame(false);


	PlantasMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	PlantasBoxComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	//ZombieMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AZombiess::OnOverlapBeginFunction);		// set up a notification for when this component hits something



	bCanFire = true;
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 1.0f;
	TiempoTranscurrido = 0.0f;
	TiempoEntreDisparos = 1.0f;

	Disparar=true;

}

// Called when the game starts or when spawned
void APlantas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlantas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Disparar)
	{
		TiempoTranscurrido += DeltaTime;
		if (TiempoTranscurrido >= TiempoEntreDisparos)
		{
			DispararPlantas(FVector(0.f, 1.f, 0.f));
			TiempoTranscurrido = 0.0f;
		}
	}
	

}
void APlantas::ShotTimerExpired()
{
	bCanFire = true;
}


//---------------disparar------------------
void APlantas::DispararPlantas(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<APVZ_USFX_LAB_01_AVProjectile>(SpawnLocation, FireRotation);
			}

			//bCanFire = false;
			//World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APlantas::ShotTimerExpired, FireRate);

			//// try and play the sound if specified
			//if (FireSound != nullptr)
			//{
			//	UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			//}

			//bCanFire = false;
			// 
			//-------------------------------------------------------------------
		
			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APlantas::ShotTimerExpired, FireRate);
			//----------------------------------------------------------------------
		}
	}

}


void APlantas::NotifyActorBeginOverlap(AActor* OtherActor)
{
	AZombies* Zombies = Cast<AZombies>(OtherActor);
	if (Zombies) {
		if (NombrePlantas!="Hipnoseta") {
			Zombies->Destroy();
			this->Destroy();
		}
		else
		{
			Zombies->SetMovingX(10);
			this->Destroy();
		}
		
	}
}

