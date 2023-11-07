// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombies.h"
#include "ZombieTierraSaltarin.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB_01_AV_API AZombieTierraSaltarin : public AZombies
{
	GENERATED_BODY()
	
public:


	AZombieTierraSaltarin();

protected:

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* ZombieMeshSaltarin;



};
