// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerCamera.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB_01_AV_API APlayerControllerCamera : public APlayerController
{
	GENERATED_BODY()

public:

	APlayerControllerCamera();	

protected:

	virtual void BeginPlay() override;
};
