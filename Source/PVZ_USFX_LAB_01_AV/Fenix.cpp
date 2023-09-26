// Fill out your copyright notice in the Description page of Project Settings.


#include "Fenix.h"


    // Sets default values
    AFenix::AFenix()
    {
        // Set this actor to call Tick() every frame
        PrimaryActorTick.bCanEverTick = true;

        // Create and attach a static mesh component (assuming you're using a static mesh to represent the plant)
        PlantMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));
        RootComponent = PlantMesh;
    }
    
    // Called when the game starts or when spawned
    void AFenix::BeginPlay()
    {
        Super::BeginPlay();

        // Start the initial disappearance timer
        GetWorldTimerManager().SetTimer(DisappearTimerHandle, this, &AFenix::Disappear, 10.0f, false);
    }

    // Called every frame
    void AFenix::Tick(float DeltaTime)
    {
        Super::Tick(DeltaTime);
    }

    // Function to handle the disappearance of the plant
    void AFenix::Disappear()
    {
        // Hide the plant (you can customize this based on how you want the plant to disappear)
        PlantMesh->SetVisibility(false);

        // Start the reappearance timer
        GetWorldTimerManager().SetTimer(ReappearTimerHandle, this, &AFenix::Reappear, 5.0f, false);
    }

    // Function to handle the reappearance of the plant
    void AFenix::Reappear()
    {
        // Show the plant
        PlantMesh->SetVisibility(true);

        // Start the disappearance timer again for the next cycle
        GetWorldTimerManager().SetTimer(DisappearTimerHandle, this, &AFenix::Disappear, 10.0f, false);
    }

