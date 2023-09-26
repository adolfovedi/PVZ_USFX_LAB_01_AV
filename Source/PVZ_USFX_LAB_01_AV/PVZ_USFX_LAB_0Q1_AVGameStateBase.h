// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PVZ_USFX_LAB_0Q1_AVGameStateBase.generated.h"

/**
 *
 */
UCLASS()
class PVZ_USFX_LAB_01_AV_API APVZ_USFX_LAB_0Q1_AVGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
public:

	APVZ_USFX_LAB_0Q1_AVGameStateBase();
	UFUNCTION()
	void SetScore(int32 NewScore);
	UFUNCTION()
	int32 GetScore();
private:
	UPROPERTY()
	int32 CurrentScore;
};
