// Fill out your copyright notice in the Description page of Project Settings.


#include "PVZ_USFX_LAB_0Q1_AVGameStateBase.h"




APVZ_USFX_LAB_0Q1_AVGameStateBase::APVZ_USFX_LAB_0Q1_AVGameStateBase()
{
	CurrentScore = 0;
}

void APVZ_USFX_LAB_0Q1_AVGameStateBase::SetScore(int32 NewScore)
{
	CurrentScore = NewScore;
}

int32 APVZ_USFX_LAB_0Q1_AVGameStateBase::GetScore()
{
	return CurrentScore;
}

