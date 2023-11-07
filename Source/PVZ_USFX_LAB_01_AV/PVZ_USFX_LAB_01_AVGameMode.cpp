// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_USFX_LAB_01_AVGameMode.h"
#include "PVZ_USFX_LAB_01_AVPawn.h"
#include "Zombie.h"
#include "Plant.h"
#include "Potenciador.h"
#include "MegaSol.h"
#include "TimerManager.h"
#include "ZombieComun.h"
#include "ZombieCono.h"
#include "ZombieCubo.h"
#include "ZombieSenal.h"
#include "Lanzaguisantes.h"
#include "Repetidora.h"
#include "Girasol.h"
#include "Nuez.h"
#include "Hongo.h"
#include "Sol.h"

#include "Jugador.h"
#include "Controlador.h"
#include "HUDPlantas.h"
#include "Planta_Ataque.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/Engine.h"
//-------------------------------------PATRONES--------------------
//#include "GeneradorZombies.h"
//#include "GeneradorZombiesAgua.h"
//#include "GeneradorZombiesTierra.h"
//#include "Zombies.h"
//#include "ZombiesAguaBuzo.h"
//#include "ZombieTierraGlobo.h"
//#include "ZombieTierraMinero.h"
//#include "FactoryMethod_Principal.h"


//-------------------------------------PATRONES--------------------
//#include "Libro/Builder_Pattern/Builder_Main.h"
//#include "Libro/Factory_Pattern/FactoryMethod_Main.h"
//#include "Libro/Singleton_Pattern/Singleton_Main.h"
//#include "Libro/Decorator_Pattern/Decorator_Main.h"
//#include "Libro/Observer_Pattern/Observer_Main.h"
//
#include "Ejemplo/Factory_Method/FactoryMethod_Principal.h"
#include "Ejemplo/Decorator/Decorator_Principal.h"
//#include "Ejemplo/Observer/Observer_Principal.h"
//------------------------------------------------------------------




APVZ_USFX_LAB_01_AVGameMode::APVZ_USFX_LAB_01_AVGameMode()
{

	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = APVZ_USFX_LAB_01_AVPawn::StaticClass();

	//-----------------------------------------------

	//Definiendo el Pawn o Peon
	DefaultPawnClass = AJugador::StaticClass();
	//Definiendo el Controlador
	PlayerControllerClass = AControlador::StaticClass();
	//Definiendo el HUD
	HUDClass = AHUDPlantas::StaticClass();



//	contador = FVector(0, 0, 0);
//	localizacion = FVector(400.0, 200.0, 100.0);
//	contador2 = 0;
//
//	TiempoTranscurrido = 0.0f;
//
//
//	FilaActual = 1;
//	ColumnaActual = 1;
////-----------------------------------------------------
//
//
//	MapPotenciadores.Add(TEXT("Sol"), 0);
//	MapPotenciadores.Add(TEXT("Abono"), 1);
//	MapPotenciadores.Add(TEXT("Agua"), 2);
//	MapPotenciadores.Add(TEXT("Pala"), 0);
//
//	//GetWorldTimerManager().SetTimer(TimerHandlePotenciadoresAgua, this, &APVZ_USFX_LAB02GameMode::TimerCallBackPotenciadoresAgua, IncrementarAguaCada, false);
//	// En una funci�n de tu clase que hereda de AActor o UObject
//	//GetWorldTimerManager().SetTimer(TimerHandleTarjetasPlantaNuez, this, &APVZ_USFX_LAB02GameMode::TimerCallBackTarjetasPlantaNuez, 15.0f, false);
//
//	MapTarjetasPlantas.Add(TEXT("Lanzaguisantes"), 0);
//	MapTarjetasPlantas.Add(TEXT("Girasol"), 10);
//	MapTarjetasPlantas.Add(TEXT("Nuez"), 10);
//	MapTarjetasPlantas.Add(TEXT("Papa"), 0);
//	MapTarjetasPlantas.Add(TEXT("Hongo"), 1);
//	MapTarjetasPlantas.Add(TEXT("Repetidora"), 10);
//	MapTarjetasPlantas.Add(TEXT("PlantaCarnivora"), 10);
//	MapTarjetasPlantas.Add(TEXT("Lanzamaiz"), 10);
//	MapTarjetasPlantas.Add(TEXT("Patatapulta"), 10);
//
//	TPair<FString, uint32> TarjetaPlanta;
//	TarjetaPlanta.Key = TEXT("LanzaChiles");
//	TarjetaPlanta.Value = 5;
//
//	MapTarjetasPlantas.Add(TarjetaPlanta);
//
//}
//
////-------------------------------------
//void APVZ_USFX_LAB_01_AVGameMode::aumentovelocidad()
//{
//	for (int i = 0; i < Zombies.Num(); i++)
//	{
//		Zombies[i]->MovementSpeed = +FMath::FRandRange(0, 0.2);
//	}
//
//}
//
//void APVZ_USFX_LAB_01_AVGameMode::MostrarEnergiaDePlantas()
//{
//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje")));
//
//	NombrePlanta = FString::Printf(TEXT("Planta %d_%d"), FilaActual, ColumnaActual);
//
//	APlant* Planta = Plantas.FindRef(NombrePlanta);
//
//	if (Planta)
//	{
//		FString Mensaje = FString::Printf(TEXT("%s: Energia %i"), *NombrePlanta, Planta->energia);
//
//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, Mensaje);
//
//		UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);
//
//	}
//	else
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("No se encontr� la planta")));
//	}
//
//	ColumnaActual++;
//
//	if (ColumnaActual > 2) // Ajusta este valor al n�mero total de columnas
//	{
//		ColumnaActual = 1;
//		FilaActual++;
//
//		if (FilaActual > 5) // Ajusta este valor al n�mero total de filas
//		{
//			FilaActual = 1;
//		}
//	}
}

//-------------------------------------------------- PATRONES -------------------- 

void APVZ_USFX_LAB_01_AVGameMode::EjemploPatrones()
{
	//AFactoryMethod_Principal* FactoryMethod = GetWorld()->SpawnActor<AFactoryMethod_Principal>(AFactoryMethod_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//ADecorator_Principal* Decorator = GetWorld()->SpawnActor<ADecorator_Principal>(ADecorator_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//AObserver_Principal* Observer = GetWorld()->SpawnActor<AObserver_Principal>(AObserver_Principal::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

}

void APVZ_USFX_LAB_01_AVGameMode::Patrones()
{

	//ABuilder_Main* Builder = GetWorld()->SpawnActor<ABuilder_Main>(ABuilder_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//ASingleton_Main* Singleton = GetWorld()->SpawnActor<ASingleton_Main>(ASingleton_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//AFactoryMethod_Main* FactoryMethod = GetWorld()->SpawnActor<AFactoryMethod_Main>(AFactoryMethod_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//ADecorator_Main* Decorator = GetWorld()->SpawnActor<ADecorator_Main>(ADecorator_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);

	//AObserver_Main* Observer = GetWorld()->SpawnActor<AObserver_Main>(AObserver_Main::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);



}
//-------------------------------------------------- PATRONES --------------------

void APVZ_USFX_LAB_01_AVGameMode::BeginPlay()
{
	Super::BeginPlay();

	
	///FTransform SpawnLocation;
	//SpawnLocation.SetLocation(FVector(-1500.0f, 1200.0f, 200.0f));

	//ASol* Sol1 = GetWorld()->SpawnActor<ASol>(ASol::StaticClass(), FVector(-400.0f, -50.0f, 160.0f), FRotator::ZeroRotator);
	//ASol* Sol2 = GetWorld()->SpawnActor<ASol>(ASol::StaticClass(), FVector(-450, -50, 160), FRotator::ZeroRotator);
	//
	AFactoryMethod_Principal* FactoryMethod = GetWorld()->SpawnActor<AFactoryMethod_Principal>(AFactoryMethod_Principal::StaticClass());

	//FVector Location(-1500.0f, 0.0f, 200.0f); 
	//for (int i = 0; i < 6; i++)
	//{
	//	SpawnPlantLanzaguisantes = GetWorld()->SpawnActor<ALanzaguisantes>(ALanzaguisantes::StaticClass(),Location,FRotator::ZeroRotator);

	//	Location = Location + FVector(200.0f, 0.0f, 0.0f);
	//}

	//
	////-------------------------------------->ZombiesComun<------------------------

	//float initialPositionX = -1500.0f;
	//float initialPositionY = 1200.0f;

	//for (int32 i = 0; i < NumberZombiesComun; ++i)
	//{
	//	AZombieComun* NewZombieComun = SpawnZombieComun(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

	//	if (NewZombieComun)
	//	{
	//		NewZombieComun->SetSpawnAfter(FMath::RandRange(1, 10));
	//		NewZombieComun->SetActorHiddenInGame(true);
	//		NewZombieComun->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
	//		NewZombieComun->SetCanMove(false);
	//		ArrayZombies.Add(NewZombieComun);
	//	}
	//}

	//---------------------------->ZombiesCono<---------------------------

	//initialPositionX = -1500.0f;
	//initialPositionY = 1200.0f;

	//for (int32 i = 0; i < NumberZombiesCono; ++i)
	//{
	//	AZombieCono* NewZombieCono = SpawnZombieCono(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

	//	if (NewZombieCono)
	//	{
	//		NewZombieCono->SetSpawnAfter(FMath::RandRange(1, 10));
	//		NewZombieCono->SetActorHiddenInGame(true);
	//		NewZombieCono->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
	//		NewZombieCono->SetCanMove(false);
	//		ArrayZombies.Add(NewZombieCono);
	//	}
	//}


	//--------------------------------->ZombiesCubo<------------------------------


	//initialPositionX = -1500.0f;
	//initialPositionY = 1200.0f;

	//for (int32 i = 0; i < NumberZombiesCubo; ++i)
	//{
	//	AZombieCubo* NewZombieCubo = SpawnZombieCubo(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

	//	if (NewZombieCubo)
	//	{
	//		NewZombieCubo->SetSpawnAfter(FMath::RandRange(1, 10));
	//		NewZombieCubo->SetActorHiddenInGame(true);
	//		NewZombieCubo->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
	//		NewZombieCubo->SetCanMove(false);
	//		ArrayZombies.Add(NewZombieCubo);

	//	}
	//}

	//--------------------------------------->ZombiesSenal<---------------------------------

	//initialPositionX = -1500.0f;
	//initialPositionY = 1200.0f;

	//for (int32 i = 0; i < NumberZombiesSenal; ++i)
	//{
	//	AZombieSenal* NewZombieSenal = SpawnZombieSenal(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

	//	if (NewZombieSenal)
	//	{
	//		NewZombieSenal->SetSpawnAfter(FMath::RandRange(1, 10));
	//		NewZombieSenal->SetActorHiddenInGame(true);
	//		NewZombieSenal->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
	//		NewZombieSenal->SetCanMove(false);
	//		ArrayZombies.Add(NewZombieSenal);
	//	}
	//}

	

	//-------------------------------------------->LanzaGuizantes<------------------------------------------------


	//initialPositionX = -1500.0f;
	//initialPositionY = 100.0f;
	//for (int i = 0; i < 3; i++)
	//{
	//	ALanzaguisantes* NewLanzaguisantes = SpawnPlantLanzaguisantes(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

	//	if (NewLanzaguisantes)
	//	{

	//		NewLanzaguisantes->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
	//		aPlantas.Add(NewLanzaguisantes);
	//	}



	//	for (int j = 0; j < 2; j++) {

	//		APlant* NewLanzaguizantes = SpawnPlant(FVector(initialPositionX + i * 150.0f, initialPositionY + j * 350.0f, 200.0f));
	//		aPlantas.Add(NewLanzaguizantes);

	//	}
	//}

	//---------------------------------------------->Girasol<---------------------------------------------------------

	//initialPositionX = -1000.0f;
	//initialPositionY = 100.0f;
	//for (int i = 0; i < 2; i++)
	//{
	//	AGirasol* NewGirasol = SpawnPlantGirasol(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

	//	if (NewGirasol)
	//	{
	//		NewGirasol->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
	//		aPlantas.Add(NewGirasol);
	//	}


	//	for (int j = 0; j < 2; j++) {
	//		APlant* NewLanzaguizantes = SpawnPlant(FVector(initialPositionX + i * 150.0f, initialPositionY + j * 350.0f, 200.0f));
	//		aPlantas.Add(NewLanzaguizantes);
	//	}
	//}

	//---------------------------------------------->Repetidora<--------------------------------------------------------

	//initialPositionX = -1480.0f;
	//initialPositionY = 300.0f;
	//for (int i = 0; i < 5; i++)
	//{
	//	ARepetidora* NewRepetidora = SpawnPlantRepetidora(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

	//	if (NewRepetidora)
	//	{
	//		NewRepetidora->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
	//		aPlantas.Add(NewRepetidora);
	//	}


	//	for (int j = 0; j < 2; j++) {
	//		APlant* NewLanzaguizantes = SpawnPlant(FVector(initialPositionX + i * 150.0f, initialPositionY + j * 350.0f, 200.0f));
	//		aPlantas.Add(NewLanzaguizantes);
	//	}
	//}
	//---------------------------------------------->Nuez<---------------------------------------------------------

	//initialPositionX = -1025.0f;
	//initialPositionY = 480.0f;
	//for (int i = 0; i < 2; i++)
	//{
	//	ANuez* NewNuez = SpawnPlantNuez(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

	//	if (NewNuez)
	//	{
	//		NewNuez->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
	//		aPlantas.Add(NewNuez);
	//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Energia de %s es: %i"), *NewNuez->GetName(), NewNuez->energia));
	//	}


	//	for (int j = 0; j < 2; j++) {
	//		APlant* NewLanzaguizantes = SpawnPlant(FVector(initialPositionX + i * 150.0f, initialPositionY + j * 350.0f, 200.0f));
	//		aPlantas.Add(NewLanzaguizantes);
	//		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Energia de %s es: %i"), *NewLanzaguisantes->GetName(), NewLanzaguisantes->energia));
	//	}
	//}

	//---------------------------------------------->Hongo<---------------------------------------------------------

	//initialPositionX = -1172.0f;
	//initialPositionY = 490.0f;
	//for (int i = 0; i < 1; i++)
	//{
	//	AHongo* NewHongo = SpawnPlantHongo(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

	//	if (NewHongo)
	//	{
	//		NewHongo->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
	//		aPlantas.Add(NewHongo);
	//	}


	//	for (int j = 0; j < 2; j++) {
	//		APlant* NewLanzaguizantes = SpawnPlant(FVector(initialPositionX + i * 150.0f, initialPositionY + j * 350.0f, 200.0f));
	//		aPlantas.Add(NewLanzaguizantes);
	//	}
	//}

	//initialPositionX = -1500.0f;
	//initialPositionY = 1000.0f;
	//for (int i = 0; i < 5; i++)
	//{
	//	AZombie* NewZombie = SpawnZombie(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));
	//	//NewZombie->SetActorEnableCollision(true);
	//	NewZombie->SetCanMove(true);
	//}

	/*AMegaSol* NewMegasol1 = GetWorld()->SpawnActor<AMegaSol>(FVector(0.0f, 0.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));
	MapPotenciadores.Add(NewMegasol1, 1);*/

	//MapPotenciadores.Add(TEXT("Megasol"), 1);
	//MapPotenciadores.Add(TEXT("AbonoMagico"), 3);
	//MapPotenciadores.Add(TEXT("Regadera"), 0);
	//MapPotenciadores.Add(TEXT("Pala"), 5);

	//UWorld* const World = GetWorld();

	//if (World != nullptr)
	//{
	//	// spawn the projectile
	//	World->GetTimerManager().SetTimer(TimerHandleTarjetasPlantaNuez, this, &APVZ_USFX_LAB_01_AVGameMode::TimerCallBackTarjetasPlantaNuez, 15.0f);
	//	//GetWorldTimerManager().SetTimer(TotalProyectilesDisparados, this, &APVZ_USFX_LAB_01_AVGameMode::MostrarNumeroProyectiles, 5.0f, true);
	//}

}

//----------------------------------------------------------------------
//void APVZ_USFX_LAB_01_AVGameMode::MostrarNumeroProyectiles()
//{
//	//Mostrar el Numero total de proyectiles disparados en la consola 
//	UE_LOG(LogTemp, Warning, TEXT("Numero total de proyectiles disparados: %d"), APlant::TotalProyectilesDisparados);
//	//GetWorldTimerManager().SetTimer(TimerHandle_MostrarProyectiles, this, &APVZ_USFX_LAB_01_AVGameMode::MostrarNumeroProyectiles, 5.0f, true);
//}
//-----------------------------------------------------------------


void APVZ_USFX_LAB_01_AVGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//VisualizarTarjetasPlantas();

	//if (TiempoTrancurridoSiguienteTarjetaLanzaguisantes > 5.0f)
	//{
	//	MapTarjetasPlantas["Lanzaguisantes"] += 1;
	//	TiempoTrancurridoSiguienteTarjetaLanzaguisantes = 0.0f;
	//}

	//if (TiempoTrancurridoSiguienteTarjetaGirasol > 10.0f)
	//{
	//	MapTarjetasPlantas["Girasol"] += 1;
	//	TiempoTrancurridoSiguienteTarjetaGirasol = 0.0f;
	//}

	//TiempoTrancurridoSiguienteTarjetaLanzaguisantes += DeltaTime;
	//TiempoTrancurridoSiguienteTarjetaGirasol += DeltaTime;

	//TiempoTranscurrido += DeltaTime;
	//TiempoTranscurridoSiguientePala += DeltaTime;
	//TiempoTranscurridoSiguienteAbono += DeltaTime;

	//if (TiempoTranscurridoSiguienteAbono >= 10.0f)
	//{
	//	MapPotenciadores[TEXT("Abono")] += 1;
	//	TiempoTranscurridoSiguienteAbono = 0.0f;
	//	//VisualizarPotenciadores();
	//}


	//if (TiempoTranscurridoSiguientePala >= 10.0f)
	//{
	//	MapPotenciadores[TEXT("Pala")] += 1;
	//	TiempoTranscurridoSiguientePala = 0.0f;
	//	//VisualizarPotenciadores();
	//}

	////	if (ArrayZombies.Num() > 0) {

	//for (AZombie* ActualZombie : ArrayZombies)
	//{
	//	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("SpawnAfter: %f"), ActualZombie->GetSpawnAfter()));

	//	if (ActualZombie && ActualZombie->SpawnAfter <= 0)
	//	{
	//		ActualZombie->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));      // Establece la escala de spawn deseada
	//		ActualZombie->SetActorHiddenInGame(false);      // Haz que el actor sea visible
	//		ActualZombie->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
	//		ActualZombie->SetCanMove(true);     // Habilita las colisiones si es necesario
	//		NumberZombiesSpawned += 1;

	//		ArrayZombies.Remove(ActualZombie);


	//		for (TPair<FString, uint32> ElementoActual : MapPotenciadores)
	//		{
	//			FString Llave = ElementoActual.Key;
	//			int32 Valor = ElementoActual.Value;
	//			//UE_LOG(LogTemp, Warning, TEXT("Llave: %s, Valor: %d"), *Llave, Valor);

	//			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Elemento: %s, Cantidad: %d"), *ElementoActual.Key, ElementoActual.Value));
	//		}

	//	}
	//	else
	//	{
	//		ActualZombie->SpawnAfter -= DeltaTime;
	//	}
	//}
	/* }
else {
	VisualizarPotenciadores();
}*/
}

//void APVZ_USFX_LAB_01_AVGameMode::Spawn()
//{
//	contador2++;
//
//	contador = contador + FVector(100, 0, 0);
//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje")));
//
//
//	AZombie* Zombie1 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), localizacion, FRotator::ZeroRotator);
//
//
//
//	localizacion.X = localizacion.X + contador2 * 100;
//	localizacion.Y = localizacion.Y + contador2 * 100;
//	//localizacion = localizacion + contador;
//
//}


//void APVZ_USFX_LAB_01_AVGameMode::VisualizarPotenciadores() {
//	for (TPair<FString, uint32> ElementoActual : MapPotenciadores)
//	{
//		FString Llave = ElementoActual.Key;
//		int32 Valor = ElementoActual.Value;
//		UE_LOG(LogTemp, Warning, TEXT("Llave: %s, Valor: %d"), *Llave, Valor);
//
//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Elemento: %s, Cantidad: %d"), *Llave, Valor));
//	}
//}
//
//void APVZ_USFX_LAB_01_AVGameMode::VisualizarTarjetasPlantas() {
//	for (TPair<FString, uint32> TarjetaActual : MapTarjetasPlantas)
//	{
//		FString Llave = TarjetaActual.Key;
//		int32 Valor = TarjetaActual.Value;
//		UE_LOG(LogTemp, Warning, TEXT("Llave: %s, Valor: %d"), *Llave, Valor);
//
//		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Planta: %s, tiempo recarga: %d"), *Llave, Valor));
//	}
//}
//
////void APVZ_USFX_LAB_01_AVGameMode::TimerHandle_MostrarProyectiles()
////{
////
////}
//
//
////AZombie* APVZ_USFX_LAB02GameMode::SpawnZombie(FVector _spawnPosition)
////{
////	FTransform SpawnLocation;
////	SpawnLocation.SetLocation(_spawnPosition);
////	return GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation);
////}
//
//AZombieComun* APVZ_USFX_LAB_01_AVGameMode::SpawnZombieComun(FVector _spawnPosition)
//{
//	FTransform SpawnLocation;
//	SpawnLocation.SetLocation(_spawnPosition);
//	return GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass(), SpawnLocation);
//}
//
//AZombieCono* APVZ_USFX_LAB_01_AVGameMode::SpawnZombieCono(FVector _spawnPosition)
//{
//	FTransform SpawnLocation;
//	SpawnLocation.SetLocation(_spawnPosition);
//	return GetWorld()->SpawnActor<AZombieCono>(AZombieCono::StaticClass(), SpawnLocation);
//}
//
//AZombieCubo* APVZ_USFX_LAB_01_AVGameMode::SpawnZombieCubo(FVector _spawnPosition)
//{
//	FTransform SpawnLocation;
//	SpawnLocation.SetLocation(_spawnPosition);
//	return GetWorld()->SpawnActor<AZombieCubo>(AZombieCubo::StaticClass(), SpawnLocation);
//}
//
//AZombieSenal* APVZ_USFX_LAB_01_AVGameMode::SpawnZombieSenal(FVector _spawnPosition)
//{
//	FTransform SpawnLocation;
//	SpawnLocation.SetLocation(_spawnPosition);
//	return GetWorld()->SpawnActor<AZombieSenal>(AZombieSenal::StaticClass(), SpawnLocation);
//}
//
//APlant* APVZ_USFX_LAB_01_AVGameMode::SpawnPlant(FVector _spawnPosition)
//{
//	FTransform SpawnLocation;
//	SpawnLocation.SetLocation(_spawnPosition);
//	return GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocation);
//}
//
//
//ALanzaguisantes* APVZ_USFX_LAB_01_AVGameMode::SpawnPlantLanzaguisantes(FVector _spawnPosition)
//{
//	FTransform SpawnLocation;
//	SpawnLocation.SetLocation(_spawnPosition);
//	return GetWorld()->SpawnActor<ALanzaguisantes>(ALanzaguisantes::StaticClass(), SpawnLocation);
//
//}
//
//AGirasol* APVZ_USFX_LAB_01_AVGameMode::SpawnPlantGirasol(FVector _spawnPosition)
//{
//	FTransform SpawnLocation;
//	SpawnLocation.SetLocation(_spawnPosition);
//	return GetWorld()->SpawnActor<AGirasol>(AGirasol::StaticClass(), SpawnLocation);
//}
//
//ARepetidora* APVZ_USFX_LAB_01_AVGameMode::SpawnPlantRepetidora(FVector _spawnPosition)
//{
//	FTransform SpawnLocation;
//	SpawnLocation.SetLocation(_spawnPosition);
//	return GetWorld()->SpawnActor<ARepetidora>(ARepetidora::StaticClass(), SpawnLocation);
//}
//
//ANuez* APVZ_USFX_LAB_01_AVGameMode::SpawnPlantNuez(FVector _spawnPosition)
//{
//	FTransform SpawnLocation;
//	SpawnLocation.SetLocation(_spawnPosition);
//	return GetWorld()->SpawnActor<ANuez>(ANuez::StaticClass(), SpawnLocation);
//}
//
//AHongo* APVZ_USFX_LAB_01_AVGameMode::SpawnPlantHongo(FVector _spawnPosition)
//{
//	FTransform SpawnLocation;
//	SpawnLocation.SetLocation(_spawnPosition);
//	return GetWorld()->SpawnActor<AHongo>(AHongo::StaticClass(), SpawnLocation);
//}
//
//
//void APVZ_USFX_LAB_01_AVGameMode::TimerCallBackPotenciadoresAgua()
//{
//	MapPotenciadores[TEXT("Agua")] += 1;
//}
//
//void APVZ_USFX_LAB_01_AVGameMode::TimerCallBackTarjetasPlantaNuez()
//{
//	MapTarjetasPlantas[TEXT("Nuez")] += 1;
//}
