// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombies.h"
#include "ZombieAguaDelfin.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB_01_AV_API AZombieAguaDelfin : public AZombies
{
	GENERATED_BODY()

public:
	AZombieAguaDelfin();

protected:

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* ZombieMeshDelfin;
};
