// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerCamera.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"

APlayerControllerCamera::APlayerControllerCamera()
{

}

void APlayerControllerCamera::BeginPlay()
{
	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);
}
