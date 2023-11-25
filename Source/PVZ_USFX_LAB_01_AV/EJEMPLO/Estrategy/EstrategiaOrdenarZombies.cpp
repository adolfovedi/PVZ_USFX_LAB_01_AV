// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaOrdenarZombies.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/Zombies.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Observer/PlantasObservados.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Observer/TorreLocalizacion.h"
// Sets default values
AEstrategiaOrdenarZombies::AEstrategiaOrdenarZombies()
{
    // Configure este actor para que llame a Tick() en cada cuadro. Puede desactivar esto para mejorar el rendimiento si no lo necesita.
    PrimaryActorTick.bCanEverTick = true;
    CastReady = true;

    //-----------------Localizaciones.Add(FVector(-1500.0f, 0.0f, 200.0f));-----------------
    MoverZombie01 = true;
    MoverZombie02 = false;
    MoverZombie03 = false;
    MoverZombie04 = false;
    MoverZombie05 = false;
    MoverZombie06 = false;

    //---------Contenedor_Posiciones.Add(FVector(-1500.0f, 0.0f, 200.0f));---------

   /* Localizaciones.Add(FVector(-1500.0f, 1000.0f, 200.0f));
    Localizaciones.Add(FVector(-1500.0f, 1150.0f, 200.0f));
    Localizaciones.Add(FVector(-1500.0f, 1300.0f, 200.0f));
    Localizaciones.Add(FVector(-1500.0f, 1450.0f, 200.0f));
    Localizaciones.Add(FVector(-1500.0f, 1600.0f, 200.0f));
    Localizaciones.Add(FVector(-1500.0f, 1850.0f, 200.0f));*/

    
}

// Called when the game starts or when spawned
void AEstrategiaOrdenarZombies::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AEstrategiaOrdenarZombies::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (CastReady)
    {
        ZombieMovido = ZombieMover();
        CastReady = false;
    }


    if (MoverZombie01)
    {
        cambiarUbicacion(DeltaTime, 0);

        if (ZombieMovido->GetActorLocation().Y <= Localizaciones[0].Y + 1.0f && ZombieMovido->GetActorLocation().Y >= Localizaciones[0].Y - 1.0f)
        {
            MoverZombie01 = false;
            CastReady = true;
            MoverZombie02 = true;
        }
    }


    if (MoverZombie02)
    {
        if (CastReady)
        {
            ZombieMovido = ZombieMover();
            CastReady = false;
        }
        cambiarUbicacion(DeltaTime, 1);
        if (ZombieMovido->GetActorLocation().Y <= Localizaciones[1].Y + 1.0f && ZombieMovido->GetActorLocation().Y >= Localizaciones[1].Y - 1.0f)
        {
            MoverZombie02 = false;
            CastReady = true;
            MoverZombie03 = true;
        }
    }

    if (MoverZombie03)
    {
        if (CastReady)
        {
            ZombieMovido = ZombieMover();
            CastReady = false;
        }
        cambiarUbicacion(DeltaTime, 2);
        if (ZombieMovido->GetActorLocation().Y <= Localizaciones[2].Y + 1.0f && ZombieMovido->GetActorLocation().Y >= Localizaciones[2].Y - 1.0f)
        {
            MoverZombie03 = false;
            CastReady = true;
            MoverZombie04 = true;
        }
    }
    if (MoverZombie04)
    {
        if (CastReady)
        {
            ZombieMovido = ZombieMover();
            CastReady = false;
        }
        cambiarUbicacion(DeltaTime, 3);
        if (ZombieMovido->GetActorLocation().Y <= Localizaciones[3].Y + 1.0f && ZombieMovido->GetActorLocation().Y >= Localizaciones[3].Y - 1.0f)
        {
            MoverZombie04 = false;
            CastReady = true;
            MoverZombie05 = true;
        }
    }
    if (MoverZombie05)
    {
        if (CastReady)
        {
            ZombieMovido = ZombieMover();
            CastReady = false;
        }
        cambiarUbicacion(DeltaTime, 4);
        if (ZombieMovido->GetActorLocation().Y <= Localizaciones[4].Y + 1.0f && ZombieMovido->GetActorLocation().Y >= Localizaciones[4].Y - 1.0f)
        {
            MoverZombie05 = false;
            CastReady = true;
            MoverZombie06 = true;
        }
    }
    if (MoverZombie06)
    {
        if (CastReady)
        {
            ZombieMovido = ZombieMover();
            CastReady = false;
        }

        cambiarUbicacion(DeltaTime, 5);
        if (ZombieMovido->GetActorLocation().Y <= Localizaciones[5].Y + 1.0f && ZombieMovido->GetActorLocation().Y >= Localizaciones[5].Y - 1.0f)
        {
            TorreLocalizacion->DefinirEstado("ZombieEncontrado");
            class AZombies* ZombieWithMaxLife = nullptr;
            for (class AZombies* ZombiePro : zombiesCon)
            {
                // Verificar si el puntero al zombie es v�lido
                if (ZombiePro && ZombiePro->MoverZombie == false)
                {
                    ZombieWithMaxLife = ZombiePro;
                    ZombieWithMaxLife->MoverZombie = true;
                }
            }

            //CastReady = true;
            GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("el ultimo dejo de moverse")));
            MoverZombie06 = false;
        }
    }


}

void AEstrategiaOrdenarZombies::Estrategias_Ataque(TMap<FString, AActor*> Actores)
{

    //Zombies = Cast<AZombies>(Planta);

    AActor** AguaFlotante = Actores.Find("AguaFlotante");
    AActor** AguaDelfin = Actores.Find("AguaDelfin");
    AActor** TierraGlobo = Actores.Find("TierraGlobo");
    AActor** TierraSaltarin = Actores.Find("TierraSaltarin");
    AActor** TierraMinero = Actores.Find("TierraMinero");
    AActor** AguaBuzo = Actores.Find("AguaBuzo");
    if (AguaFlotante)
    {
        // Intentar realizar un cast a tu clase de actor espec�fica
        Zombies = Cast<AZombies>(*AguaFlotante);
        zombiesCon.Emplace(Zombies);

        Zombies = Cast<AZombies>(*AguaDelfin);
        zombiesCon.Emplace(Zombies);

        Zombies = Cast<AZombies>(*TierraGlobo);
        zombiesCon.Emplace(Zombies);

        Zombies = Cast<AZombies>(*TierraSaltarin);
        zombiesCon.Emplace(Zombies);

        Zombies = Cast<AZombies>(*TierraMinero);
        zombiesCon.Emplace(Zombies);

        Zombies = Cast<AZombies>(*AguaBuzo);
        zombiesCon.Emplace(Zombies);

        if (Zombies)
        {
            // El cast fue exitoso
           // return Zombies;
            GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Casteado bien")));

        }
        else
        {
            // El cast fall�, el actor no es del tipo esperado
            //UE_LOG(LogTemp, Warning, TEXT("Failed to cast actor to AYourActorClass for key %s"));
        }
    }
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estrategia para armar un ataque en equipo")));


}

AZombies* AEstrategiaOrdenarZombies::ZombieMover()
{
    class AZombies* ZombieWithMaxLife = nullptr;
    float MaxLife = -1.0f;  // Valor inicial bajo para garantizar que cualquier vida positiva sea mayor

    for (class AZombies* ZombiePro : zombiesCon)
    {
        // Verificar si el puntero al zombie es v�lido
        if (ZombiePro && ZombiePro->ZombieMovido == false)
        {
            // Comparar vidas y actualizar si se encuentra una vida m�s alta
            if (ZombiePro->GetVida() > MaxLife)
            {
                MaxLife = ZombiePro->GetVida();
                ZombieWithMaxLife = ZombiePro;

            }
        }
    }
    ZombieWithMaxLife->ZombieMovido = true;
    return ZombieWithMaxLife;
}

void AEstrategiaOrdenarZombies::cambiarUbicacion(float _DeltaTime, int Ubi)
{
    FVector Direction = Localizaciones[Ubi] - ZombieMovido->GetActorLocation();
    Direction.Normalize();

    // Establece la nueva ubicaci�n basada en la direcci�n y una velocidad de movimiento (ajusta seg�n sea necesario)
    float VelocidadMovimiento = 100.0f; // Ajusta este valor seg�n sea necesario
    FVector NuevaUbicacion = ZombieMovido->GetActorLocation() + Direction * VelocidadMovimiento * _DeltaTime;

    // Mueve el actor a la nueva ubicaci�n
    ZombieMovido->SetActorLocation(NuevaUbicacion);
}

void AEstrategiaOrdenarZombies::CastPlanta(AActor* Planta, AActor* Torre)
{
       APlantasObservados* PlantasObservados = Cast<APlantasObservados>(Planta);
	   TorreLocalizacion = Cast<ATorreLocalizacion>(Torre);
       PosicionPlanta01 = PlantasObservados->GetPocisionObservador()+FVector(0.0f,1000.0f,0.0f);
       Localizaciones.Add(PosicionPlanta01);
       Localizaciones.Add(PosicionPlanta01 + FVector(0.0f, 150.0f, 0.0f));
       Localizaciones.Add(PosicionPlanta01 + FVector(0.0f, 300.0f, 0.0f));
       Localizaciones.Add(PosicionPlanta01 + FVector(0.0f, 450.0f, 0.0f));
       Localizaciones.Add(PosicionPlanta01 + FVector(0.0f, 600.0f, 0.0f));
       Localizaciones.Add(PosicionPlanta01 + FVector(0.0f, 750.0f, 0.0f));

}







