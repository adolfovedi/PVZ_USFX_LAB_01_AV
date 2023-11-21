// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaBailedefensivo.h"
#include <Kismet/GameplayStatics.h>
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/ZombieTierraBailarin.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/ZombieTierraMichaelJackson.h"
// Sets default values
AEstrategiaBailedefensivo::AEstrategiaBailedefensivo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TimeToSpawn = 3.0f;
	//LocationBailarin = FVector(0.0f,0.0f,0.0f);
}

// Called when the game starts or when spawned
void AEstrategiaBailedefensivo::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstrategiaBailedefensivo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

//
void AEstrategiaBailedefensivo::Estrategias_Ataque(TMap<FString, AActor*> Actores)
{
	//ZombieTierraMichaelJackson = Cast<AZombieTierraMichaelJackson>(Planta);//casteamos el actor a zombie-----------------

	////--------------llamamos a la funcion de spawnear zombies cada 3 sgdos-----------------
	//GetWorldTimerManager().SetTimer(UnusedHandle, this, &AEstrategiaBailedefensivo::SpawmZombi, 3.0f, true);
	//
}

bool AEstrategiaBailedefensivo::EstaPosicionOcupadaPorZombie(FVector Posicion)
{

	// Obtener una referencia al mundo
	UWorld* Mundo = GetWorld();

	if (Mundo)
	{
		// Array para almacenar todos los actores del tipo de tu clase de zombie
		TArray<AActor*> ZombiesEnElMundo;

		// Obtener todos los actores del tipo de tu clase de zombie en el mundo
		UGameplayStatics::GetAllActorsOfClass(Mundo, AZombieTierraBailarin::StaticClass(), ZombiesEnElMundo);

		// Iterar a través de los zombies y verificar si alguno está cerca de la posición
		for (AActor* Zombie : ZombiesEnElMundo)
		{
			// Calcula la distancia entre la posición del zombie y la posición a spawnear
			float Distancia = FVector::Dist(Zombie->GetActorLocation(), Posicion);
			// Define una distancia mínima para spawnear, por ejemplo, 100 unidades
			float DistanciaMinimaParaSpawnear = 100.0f;

			// Si la distancia es menor que la distancia mínima, la posición está ocupada
			if (Distancia < DistanciaMinimaParaSpawnear) {
				return true; // Posición ocupada por otro zombie
			}
		}
	}

	return false; // Posición libre para spawnear un zombie
}

void AEstrategiaBailedefensivo::SpawmZombi()
{

	if (ZombieTierraMichaelJackson) {
		if (ZombieTierraMichaelJackson->IsValidLowLevel()) {
			if (ZombieTierraMichaelJackson->IsPendingKill()) {
				// El zombie ha sido destruido
				// Realiza las acciones correspondientes
				GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Zombie MichaelJackson ha Muerto")));
				// Por ejemplo, elimina cualquier referencia a este zombie
				ZombieTierraMichaelJackson = nullptr;
			}
			else {
				// El zombie todavía está activo
				//-----------------verificando si el zombie esta en la posicion correcta-----------------
				LocationBailarinAdelante = ZombieTierraMichaelJackson->GetActorLocation() - FVector(0.0f, 130.0f, 0.0f);
				LocationBailarinSuperior = ZombieTierraMichaelJackson->GetActorLocation() - FVector(200.0f, 0.0f, 0.0f);
				LocationBailarinInferior = ZombieTierraMichaelJackson->GetActorLocation() + FVector(200.0f, 0.0f, 0.0f);
				LocationBailarinAtras = ZombieTierraMichaelJackson->GetActorLocation() + FVector(0.0f, 130.0f, 0.0f);

				//-----------------estamos Spawnenado los zombies bailarines-----------------
				if (EstaPosicionOcupadaPorZombie(LocationBailarinAtras) == false) {
					GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Posicion Superior Libre ")));
					ZombieTierraBailarin = GetWorld()->SpawnActor<AZombieTierraBailarin>(AZombieTierraBailarin::StaticClass(), LocationBailarinAtras, FRotator::ZeroRotator);
				}
				if (EstaPosicionOcupadaPorZombie(LocationBailarinAdelante) == false) {
					GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Posicion Inferior Libre ")));
					ZombieTierraBailarin = GetWorld()->SpawnActor<AZombieTierraBailarin>(AZombieTierraBailarin::StaticClass(), LocationBailarinAdelante, FRotator::ZeroRotator);
				}
				if (EstaPosicionOcupadaPorZombie(LocationBailarinSuperior) == false) {
					GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Posicion Superior Libre ")));
					ZombieTierraBailarin = GetWorld()->SpawnActor<AZombieTierraBailarin>(AZombieTierraBailarin::StaticClass(), LocationBailarinSuperior, FRotator::ZeroRotator);
				}
				if (EstaPosicionOcupadaPorZombie(LocationBailarinInferior) == false) {
					GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Posicion Superior Libre ")));
					ZombieTierraBailarin = GetWorld()->SpawnActor<AZombieTierraBailarin>(AZombieTierraBailarin::StaticClass(), LocationBailarinInferior, FRotator::ZeroRotator);
				}

				// Puedes realizar acciones adicionales aquí si el zombie sigue vivo
			}
		}
	}





}



