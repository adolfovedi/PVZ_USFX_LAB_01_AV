// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plant.h"
#include "Fenix.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB_01_AV_API AFenix : public APlant
{
	GENERATED_BODY()
public:
	AFenix();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Function to handle the disappearance of the plant
    void Disappear();

    // Function to handle the reappearance of the plant
    void Reappear();

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

private:
    // Property to hold the static mesh component (assuming you're using a static mesh to represent the plant)
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* PlantMesh;

    // Timer handle for disappearance
    FTimerHandle DisappearTimerHandle;

    // Timer handle for reappearance
    FTimerHandle ReappearTimerHandle;
    
};
