// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Estrategy/Estrategias.h"
#include "Zombies.generated.h"
UCLASS()
class PVZ_USFX_LAB_01_AV_API AZombies : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AZombies();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	float VelocityBrickBoss;
	FVector DireccionBrickBoss;
	float MovingX;

private:
	//The current Battle Strategy
	IEstrategias* Estrategias;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetVida(float _Vida);
	float GetVida();

protected:
	//Nombre del Zombie
	FString NombreZombie;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* ZombieMeshComponent;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* ZombieBoxComponent;


	int Vida;

	void MorirZombie();
	class AOrdenarZombieHorizontal* OrdenarZombieHorizontal;

	//"Vida" del Zombie


	/*UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);*/

	//// "Armadura" del Zombie
	//FString Armadura;

	//// "Materiales" del Zombie
	//TArray<FString> Materiales;

public:



	//// "Arma" el zombie
	//void Armar();

	////"Elabora" el zombie
	//virtual void Elaboracion();

	////"Libera" el zombie
	//void Liberar();

	//Devuelve el nombre del zombie
	FString GetNombreZombie();

	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal,
		FVector NormalImpulse, const FHitResult& Hit)override;//esta funcion nos notifica cada golpe que de la clase.

	void SetMovingX(float _MovingX);
	// Change the Maneuver and set "BattleStrategy" variable
	void AniadirManiobres(AActor* myEstrategias);
	// Engage with the current Battle Strategy
	void RealiazarManiobres(TMap<FString, AActor*> Actores);



	bool ZombieMovido02;

	bool ZombieMovido;
	bool MoverZombie;
	void ColocarPlnta(AActor* Planta);
	bool PrimerZombieMuerto;
	TMap<FString, AActor*> Contenedor_Zombies;
	class AZombies* Zombies;
	class APlantasObservados * PlantaObservada;
	void CastPlantaObservada(AActor* Planta);
	bool PrimerZombieListo;
};
