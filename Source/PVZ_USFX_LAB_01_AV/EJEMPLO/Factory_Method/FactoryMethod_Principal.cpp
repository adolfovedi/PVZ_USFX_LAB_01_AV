// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryMethod_Principal.h"
#include "GeneradorZombiesAgua.h"
#include "GeneradorZombiesTierra.h"

#include "GeneradorPlantasCuerpoAtaque.h"
#include "GeneradorPlantasRangoAtaque.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Estrategy/EstrategiaBailedefensivo.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Estrategy/EstrategiaOrdenarZombies.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Observer/Observer_Principal.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Observer/TorreLocalizacion.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Observer/PlantasObservados.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Estrategy/OrdenarZombieVertical.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Estrategy/OrdenarZombieHorizontal.h"
#include "PVZ_USFX_LAB_01_AV/Ejemplo/Estrategy/OrdenarZombieHorizontal01.h"
// Sets default values
AFactoryMethod_Principal::AFactoryMethod_Principal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TiempoCambio = 0.0f;
	CambioEstrategia = true;
	EstrategiaVertical = true;
	EstrategiaHorizontal = false;
	aux01 = false;
	aux02 = false;

}

// Called when the game starts or when spawned
void AFactoryMethod_Principal::BeginPlay()
{
	Super::BeginPlay();


	//Aparicion del zombie abanderado
	TorreLocalizacion = GetWorld()->SpawnActor<ATorreLocalizacion>(ATorreLocalizacion::StaticClass());

	//Aparicion del primer zombie que es el ansioso y definiendo su zombie como el abanderado
	PlantasObservados = GetWorld()->SpawnActor<APlantasObservados>(APlantasObservados::StaticClass(), FVector(-1000.0f, -300.0f, 200.0f), FRotator::ZeroRotator);

	PlantasObservados->DefinirPlanta(TorreLocalizacion); //Definimos la planta como el abanderado

	//Cambia el estado del zombie abanderado, para que los suscriptores ejecuten su rutina

	TorreLocalizacion->DefinirEstado("PlantaOculta"); //Cambia el estado del zombie abanderado, para que los suscriptores ejecuten su rutina


	//--------------------------------Crea los generadores de zombies--------------------------
	AGeneradorZombies* GeneradorZombiesAgua = GetWorld()->SpawnActor<AGeneradorZombiesAgua>(AGeneradorZombiesAgua::StaticClass());
	AGeneradorZombies* GeneradorZombiesTierra = GetWorld()->SpawnActor<AGeneradorZombiesTierra>(AGeneradorZombiesTierra::StaticClass());


	//Create an Outer Health Potion and log its name
	//------------------
	


	//----Genera una ubicación aleatoria para cada zombie
	FVector SpawnLocation = FMath::RandPointInBox(FBox(FVector(-1370, 1460, 200), FVector(-600, 140, 200)));
	FVector SpawnLocation1 = FMath::RandPointInBox(FBox(FVector(-1370, 1460, 200), FVector(-600, 140, 200)));
	FVector SpawnLocation2 = FMath::RandPointInBox(FBox(FVector(-1370, 1460, 200), FVector(-600, 140, 200)));
	FVector SpawnLocation3 = FMath::RandPointInBox(FBox(FVector(-1370, 1460, 200), FVector(-600, 140, 200)));
	FVector SpawnLocation4 = FMath::RandPointInBox(FBox(FVector(-1370, 1460, 200), FVector(-600, 140, 200)));
	FVector SpawnLocation5 = FMath::RandPointInBox(FBox(FVector(-1370, 1460, 200), FVector(-600, 140, 200)));

	// Genera un zombie en el generador de zombies de tierra con coordenadas específicas
	Zombie = GeneradorZombiesTierra->OrdenarZombies("TierraGlobo", FVector(-1500.0f, 500.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("TierraGlobo", Zombie);
	Contenedor_Zombies.Emplace(Zombie);
	// Genera un zombie en el generador de zombies de tierra tipo "Minero" en una ubicación específica
	Zombie = GeneradorZombiesTierra->OrdenarZombies("TierraMinero", SpawnLocation1);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("TierraMinero", Zombie);
	Contenedor_Zombies.Emplace(Zombie);

	Zombie = GeneradorZombiesTierra->OrdenarZombies("TierraSaltarin", SpawnLocation2);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("TierraSaltarin", Zombie);
	Contenedor_Zombies.Emplace(Zombie);

	Zombie = GeneradorZombiesAgua->OrdenarZombies("AguaDelfin", SpawnLocation3);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("AguaDelfin", Zombie);
	Contenedor_Zombies.Emplace(Zombie);

	Zombie = GeneradorZombiesAgua->OrdenarZombies("AguaFlotante", SpawnLocation4);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("AguaFlotante", Zombie);
	Contenedor_Zombies.Emplace(Zombie);

	Zombie = GeneradorZombiesAgua->OrdenarZombies("AguaBuzo", SpawnLocation5);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));
	Contenedor_Actores.Add("AguaBuzo", Zombie);
	Contenedor_Zombies.Emplace(Zombie);

	//--------------------------------Crea los generadores de zombies---------------------
	//Zombie = GeneradorZombiesTierra->OrdenarZombies("MichaelJackson",FVector(-900.0f, 800.0f, 200.0f));
	//Contenedor_Actores.Add("MichaelJackson", Zombie);
	
	//--------------------------------Crea los generadores de zombies---------------------
	//AEstrategiaOrdenarZombies* EstrategiaOrdenarZombies = GetWorld()->SpawnActor<AEstrategiaOrdenarZombies>(AEstrategiaOrdenarZombies::StaticClass());
	//AOrdenarZombieHorizontal01* OrdenarZombieHorizontal01 = GetWorld()->SpawnActor<AOrdenarZombieHorizontal01>(AOrdenarZombieHorizontal01::StaticClass());
	//AOrdenarZombieVertical* OrdenarZombieVertical = GetWorld()->SpawnActor<AOrdenarZombieVertical>(AOrdenarZombieVertical::StaticClass());

	////----------donde pasamos el zombie para que sepa que estrategia usar-------
	//Zombie->AniadirManiobres(OrdenarZombieVertical);
	////Engage with the current Strategy
	//Zombie->RealiazarManiobres(Contenedor_Actores);

	//OrdenarZombieVertical->CastPlanta(PlantasObservados, TorreLocalizacion);

	//--------------------------------Crea los generadores de plantas--------------------------

	AGeneradorPlantas* GeneradorPlantasCuerpoAtaque = GetWorld()->SpawnActor<AGeneradorPlantasCuerpoAtaque>(AGeneradorPlantasCuerpoAtaque::StaticClass());
	AGeneradorPlantas* GeneradorPlantasRangoAtaque = GetWorld()->SpawnActor<AGeneradorPlantasRangoAtaque>(AGeneradorPlantasRangoAtaque::StaticClass());

	//Create an Outer Health Potion and log its name

	
	//APlantas* Planta;

	//--------------------------------Crea los generadores de plantasRangoAtaque--------------------------

	//Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("HieloGuisantes", FVector(-1500.0f, -300.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	//Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("Lanzaguisante", FVector(-700.0f, -300.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	//Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("Repetidoras", FVector(-1100.0f, -300.0f, 200.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	//--------------------------------Crea los generadores de plantasCuerpoAtaque--------------------------
	//Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Carnibora", FVector(-1500.0f, 0.0f, 250.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	//Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Hipnoseta", FVector(-1300.0f, 0.0f, 250.0f));
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El zombie es %s"), *Zombie->GetNombreZombie()));

	//Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Patatapum", FVector(-1100.0f, 0.0f, 250.0f));

	//Planta = GeneradorPlantasCuerpoAtaque->OrdenarPlantas("Patatapum", FVector(-1100.0f, 160.0f, 250.0f));


	//Planta = GeneradorPlantasRangoAtaque->OrdenarPlantas("Repetidoras", FVector(-300.0f, 0.0f, 250.0f));
}

// Called every frame
void AFactoryMethod_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

	
	
	if (EstrategiaVertical) {

		//CambioEstrategia = false;

		OrdenarZombieVertical = GetWorld()->SpawnActor<AOrdenarZombieVertical>(AOrdenarZombieVertical::StaticClass());

		//----------donde pasamos el zombie para que sepa que estrategia usar-------
		Zombie->AniadirManiobres(OrdenarZombieVertical);
		//Engage with the current Strategy
		Zombie->RealiazarManiobres(Contenedor_Actores);
		PrimerZombie = ZombieMover();


		OrdenarZombieVertical->CastPlanta(PlantasObservados, TorreLocalizacion);
		TiempoCambio = -30.0f;
		EstrategiaVertical = false;
		//PrimerZombie = Zombie;
		aux01 = true;

	}
	if (PrimerZombie && aux01) {
		if (PrimerZombie->IsValidLowLevel()) {
			if (PrimerZombie->IsPendingKill()) {
				// El zombie ha sido destruido
				// Realiza las acciones correspondientes
				// Por ejemplo, elimina cualquier referencia a este zombie
				EstrategiaHorizontal = true;
				aux01 = false;
				TorreLocalizacion->DefinirEstado("PlantaOculta");
				class AZombies* ZombieWithMaxLife = nullptr;
				for (class AZombies* ZombiePro : Contenedor_Zombies)
				{
					// Verificar si el puntero al zombie es válido
					if (ZombiePro && ZombiePro->MoverZombie == true)
					{
						ZombieWithMaxLife = ZombiePro;
						ZombieWithMaxLife->MoverZombie = false;
					}
				}
				PrimerZombie = nullptr;
				//return true;

			}
			else {
				// El zombie todavía está activo
				//return false;
				// Puedes realizar acciones adicionales aquí si el zombie sigue vivo
			}
		}
	}
	//return false;
	/*if (ZombieMuerto(PrimerZombie)) {
		
		EstrategiaHorizontal = true;
		TorreLocalizacion->DefinirEstado("PlantaOculta");

	}*/
	if (EstrategiaHorizontal) {

		CambioEstrategia = false;

		AOrdenarZombieHorizontal01* OrdenarZombieHorizontal01 = GetWorld()->SpawnActor<AOrdenarZombieHorizontal01>(AOrdenarZombieHorizontal01::StaticClass());

		//----------donde pasamos el zombie para que sepa que estrategia usar-------
		Zombie->AniadirManiobres(OrdenarZombieHorizontal01);
		//Engage with the current Strategy
		Zombie->RealiazarManiobres(Contenedor_Actores);

		OrdenarZombieHorizontal01->CastPlanta(PlantasObservados, TorreLocalizacion);
		EstrategiaHorizontal = false;
		aux02 = true;
		PrimerZombie = ZombieMover();

	}

	if (PrimerZombie && aux02) {
		if (PrimerZombie->IsValidLowLevel()) {
			if (PrimerZombie->IsPendingKill()) {
				// El zombie ha sido destruido
				// Realiza las acciones correspondientes
				// Por ejemplo, elimina cualquier referencia a este zombie
				EstrategiaVertical= true;
				aux02 = false;
				TorreLocalizacion->DefinirEstado("PlantaOculta");
				class AZombies* ZombieWithMaxLife = nullptr;
				for (class AZombies* ZombiePro : Contenedor_Zombies)
				{
					// Verificar si el puntero al zombie es válido
					if (ZombiePro && ZombiePro->MoverZombie == true)
					{
						ZombieWithMaxLife = ZombiePro;
						ZombieWithMaxLife->MoverZombie = false;
					}
				}
				PrimerZombie = nullptr;
				//return true;

			}
			else {
				// El zombie todavía está activo
				//return false;
				// Puedes realizar acciones adicionales aquí si el zombie sigue vivo
			}
		}
	}
	//EstrategiaHorizontal = true;
}

AZombies* AFactoryMethod_Principal::ZombieMover()
{
	class AZombies* ZombieWithMaxLife = nullptr;
	float MaxLife = -1.0f;  // Valor inicial bajo para garantizar que cualquier vida positiva sea mayor

	for (class AZombies* ZombiePro : Contenedor_Zombies)
	{
		// Verificar si el puntero al zombie es válido
		if (ZombiePro && ZombiePro->ZombieMovido == false)
		{
			// Comparar vidas y actualizar si se encuentra una vida más alta
			if (ZombiePro->GetVida() > MaxLife)
			{
				MaxLife = ZombiePro->GetVida();
				ZombieWithMaxLife = ZombiePro;
			}
		}

		

	}
	//ZombieWithMaxLife->ZombieMovido = true;
	Contenedor_Zombies.Remove(ZombieWithMaxLife);
	Contenedor_Actores.Remove(ZombieWithMaxLife->GetNombreZombie());
	return ZombieWithMaxLife;
}



