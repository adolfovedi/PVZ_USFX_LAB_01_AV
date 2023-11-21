// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombies.h"
#include "ZombieTierraGlobo.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB_01_AV_API AZombieTierraGlobo : public AZombies
{
	GENERATED_BODY()

public:

	AZombieTierraGlobo();


public:
	// Elabora el zombie
	/*virtual void Elaboracion() override;*/

protected:

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* ZombieMeshGlobo;

};

