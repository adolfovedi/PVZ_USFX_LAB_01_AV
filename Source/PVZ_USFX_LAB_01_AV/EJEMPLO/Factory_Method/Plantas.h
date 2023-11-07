// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plantas.generated.h"

UCLASS()
class PVZ_USFX_LAB_01_AV_API APlantas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlantas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FString NombrePlantas;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//----------------------------------------
	void ShotTimerExpired();
	//*************variable para realizar un seguimiento TotalProyectilesDisparados-----------------
	
	//-----------------------------------------------
	/*FString GetNombrePlantas();*/
	FORCEINLINE FString GetNombrePlantas() const { return NombrePlantas; }
	float TiempoTranscurrido;
	float TiempoEntreDisparos;

protected:
	//Nombre del Zombie
	
	// metodo para delvolver el nombre de la capsula
	
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* PlantasMeshComponent;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* PlantasBoxComponent;

	void DispararPlantas(FVector FireDirection);

	/* Flag to control firing  */
	uint32 bCanFire : 1;
	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset;

	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float FireRate;

	//Devuelve el nombre del Plantas
	

	bool Disparar;

	UFUNCTION() //Entra en la caja
		virtual void NotifyActorBeginOverlap(AActor* OtherActor) override; //Funcion virtual pura de la colision
};
