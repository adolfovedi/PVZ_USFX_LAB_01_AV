// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombies.h"
#include "ZombieAguaBuzo.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB_01_AV_API AZombieAguaBuzo : public AZombies
{
	GENERATED_BODY()

public:

	AZombieAguaBuzo();


protected:

	
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* ZombieMeshBuzo;



public:
	// Elabora el zombie
	/*virtual void Elaboracion() override;*/

};
