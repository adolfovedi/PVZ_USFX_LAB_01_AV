// Fill out your copyright notice in the Description page of Project Settings.


#include "Decorator_Principal.h"

// Sets default values
ADecorator_Principal::ADecorator_Principal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecorator_Principal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecorator_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

