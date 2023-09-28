// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Plant.h"
#include "PVZ_USFX_LAB_01_AVGameMode.generated.h"


class APotenciador;

UCLASS(MinimalAPI)
class APVZ_USFX_LAB_01_AVGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APVZ_USFX_LAB_01_AVGameMode();
	TArray<class Asol*> ArraySol;
	TArray<class AZombie*> ArrayZombies;
	TArray<class APlant*> ArrayPlants;
	TArray<class APlant*> ArrayPlant;

	//TMap<APotenciador*, int32> MapPotenciadores;

	TMap<FString, uint32> MapPotenciadores;
	TMap<FString, uint32> MapTarjetasPlantas;

	//PLanta
	
	int32 NumberPLantLanzaGuizantes = 3;
	int32 NumberPLantGirasol = 2;
	int32 NumberPLantRepetidora = 5;
	int32 NumberPLantNuez = 2;
	int32 NumberPLantHongo = 1;
	int32 NumberPLantSpawned = 0;

	//Zombie
	int32 NumberZombiesOrda = 20;
	int32 NumberZombiesComun = 8;
	int32 NumberZombiesCono = 5;
	int32 NumberZombiesCubo = 2;
	int32 NumberZombiesSenal = 3;

	//Mostrar mensaje---------------------------------------------------

	void MostrarNumeroProyectiles();


	//---------------------------------------------
	TMap<FName, int32> mOrdaZombies;
	int32 NumberZombiesSpawned = 0;
	TArray<APlant*> aPlantas;
	TMap<FString, APlant*> Plantas;
	FString NombrePlanta;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	

	FTimerHandle Temporizador;

	void Spawn();

	FVector contador;


	int contador2;


	FVector localizacion;


	// Declarar un vector de objetos
	TArray<AZombie*> Zombies;


	// Declarar un contenedor tipo TMap de objetos
	//TMap<FString, APlant*> Plantas;

	// Declarar un vector de objetos

	/*TArray<APlant*> Plantas;*/

	//float TiempoTranscurrido;

	void aumentovelocidad();

	void MostrarEnergiaDePlantas();


	class AZombieComun* NuevoZombie;


	FTimerHandle Temporizador2;


	class ALanzaguisantes* NuevaPlantaGuisante;



	int FilaActual;
	int ColumnaActual;

	//------------------------------------

protected:
	virtual void BeginPlay() override;


	class AZombieComun* SpawnZombieComun(FVector _spawnPosition);
	class AZombieCono* SpawnZombieCono(FVector _spawnPosition);
	class AZombieCubo* SpawnZombieCubo(FVector _spawnPosition);
	class AZombieSenal* SpawnZombieSenal(FVector _spawnPosition);

	class APlant* SpawnPlant(FVector _spawnPosition);


	

	class ALanzaguisantes* SpawnPlantLanzaguisantes(FVector _spawnPosition);
	class AGirasol* SpawnPlantGirasol(FVector _spawnPosition);
	class ARepetidora* SpawnPlantRepetidora(FVector _spawnPosition);
	class ANuez* SpawnPlantNuez(FVector _spawnPosition);
	class AHongo* SpawnPlantHongo(FVector _spawnPosition);

	float TiempoTranscurrido = 0.0f;
	float TiempoTranscurridoSiguientePala = 0.0f;
	float TiempoTranscurridoSiguienteAbono = 0.0f;
	//PLanta LanzaGuizante
	
	float TiempoTrancurridoSiguienteTarjetaLanzaguisantes = 0.0f;
	float TiempoTrancurridoSiguienteTarjetaGirasol = 0.0f;
	float TiempoTrancurridoSiguienteTarjetaNuez = 0.0f;
	float TiempoTrancurridoSiguienteTarjetaLanzamaiz = 0.0f;
	float TiempoTrancurridoSiguienteTarjetaRepetidora = 0.0f;
	//Planta Girasol



	FTimerHandle TimerHandleTarjetasPlantaNuez;
	FTimerHandle TimerHandlePotenciadoresAgua;
	float IncrementarAguaCada = 20.0f;

	void TimerCallBackPotenciadoresAgua();
	void TimerCallBackTarjetasPlantaNuez();
	void VisualizarPotenciadores();
	void VisualizarTarjetasPlantas();
	

};




