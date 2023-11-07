// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombies.h"
#include "ZombieAguaFlotante.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB_01_AV_API AZombieAguaFlotante : public AZombies
{
	GENERATED_BODY()
	
public:

	AZombieAguaFlotante();

protected:

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* ZombieMeshFlotante;



};
