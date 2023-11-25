// Fill out your copyright notice in the Description page of Project Settings.


#include "OrdenarZombieHorizontal.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Factory_Method/Zombies.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Observer/PlantasObservados.h"
#include "PVZ_USFX_LAB_01_AV/EJEMPLO/Observer/TorreLocalizacion.h"
// Sets default values
AOrdenarZombieHorizontal::AOrdenarZombieHorizontal()
{
 	
    // Configure este actor para que llame a Tick() en cada cuadro. Puede desactivar esto para mejorar el rendimiento si no lo necesita.
    PrimaryActorTick.bCanEverTick = true;
    CastReady = true;
    IgnorarPrimerZombie = false;
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
void AOrdenarZombieHorizontal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOrdenarZombieHorizontal::Tick(float DeltaTime)
{
	
    Super::Tick(DeltaTime);

   


    if (MoverZombie01)
    {
        if (CastReady)
        {
            ZombieMovido = ZombieMover();
            CastReady = false;
            ZombieMovido->PrimerZombieMuerto = true;
            PrimerZombie = ZombieMovido;
            ZombieMovido->ZombieMovido02 = true;

        }

        cambiarUbicacion(DeltaTime, 0);

        if (ZombieMovido->GetActorLocation().Y <= Localizaciones[0].Y + 1.0f && ZombieMovido->GetActorLocation().Y >= Localizaciones[0].Y - 1.0f)
        {
            MoverZombie01 = false;
            CastReady = true;
            MoverZombie02 = true;
           // ZombieWithMaxLife->ZombieMovido = true;

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
                // Verificar si el puntero al zombie es válido
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
    if (PrimerZombie) {
        if (PrimerZombie->IsValidLowLevel()) {
            if (PrimerZombie->IsPendingKill()) {
                // El zombie ha sido destruido
                // Realiza las acciones correspondientes
                GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("PrimerZombie ha Muerto")));
                // Por ejemplo, elimina cualquier referencia a este zombie
                //zombiesCon.Remove(*AguaDelfin);
               /* MoverZombie01 = true;
                CastReady = true;*/
                IgnorarPrimerZombie = true;
                MoverZombie02 = true;
                PosicionPlanta01 = PlantasObservados->GetPocisionObservador() + FVector(0.0f, 1000.0f, 0.0f);
                //----------------------Localizaciones De Zombies----------------------
                Localizaciones.Add(PosicionPlanta01);
                Localizaciones.Add(PosicionPlanta01 + FVector(0.0f, 1200.0f, 0.0f));
                Localizaciones.Add(PosicionPlanta01 + FVector(0.0f, 1400.0f, 0.0f));
                Localizaciones.Add(PosicionPlanta01 + FVector(0.0f, 1600.0f, 0.0f));
                Localizaciones.Add(PosicionPlanta01 + FVector(0.0f, 1800.0f, 0.0f));
                Localizaciones.Add(PosicionPlanta01 + FVector(0.0f, 2000.0f, 0.0f));

                class AZombies* ZombieWithMaxLife = nullptr;
                for (class AZombies* ZombiePro : zombiesCon)
                {
                    // Verificar si el puntero al zombie es válido
                    if (ZombiePro && ZombiePro->MoverZombie == true)
                    {
                        ZombieWithMaxLife = ZombiePro;
                        ZombieWithMaxLife->MoverZombie = false;
                    }
                }

                //CastReady = true;
                GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("el ultimo dejo de moverse")));
                //MoverZombie06 = false;
                PrimerZombie = nullptr;

            }
            else {
                // El zombie todavía está activo
              
                // Puedes realizar acciones adicionales aquí si el zombie sigue vivo
            }
        }
    }

}

void AOrdenarZombieHorizontal::Estrategias_Ataque(TMap<FString, AActor*> Actores)
{
    //Zombies = Cast<AZombies>(Planta);
    // 
    //----------------------Cast de Zombies----------------------
    AActor** AguaFlotante = Actores.Find("AguaFlotante");
    AguaDelfin = Actores.Find("AguaDelfin");
    AActor** TierraGlobo = Actores.Find("TierraGlobo");
    AActor** TierraSaltarin = Actores.Find("TierraSaltarin");
    AActor** TierraMinero = Actores.Find("TierraMinero");
    AActor** AguaBuzo = Actores.Find("AguaBuzo");
    if (AguaFlotante)
    {
        // Intentar realizar un cast a tu clase de actor específica
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
            // El cast falló, el actor no es del tipo esperado
            //UE_LOG(LogTemp, Warning, TEXT("Failed to cast actor to AYourActorClass for key %s"));
        }
    }
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estrategia para armar una Fila Horizontal")));

}

AZombies* AOrdenarZombieHorizontal::GetPrimerZombie()
{
    return PrimerZombie;
}

AZombies* AOrdenarZombieHorizontal::ZombieMover()
{
    class AZombies* ZombieWithMaxLife = nullptr;
    float MaxLife = -1.0f;  // Valor inicial bajo para garantizar que cualquier vida positiva sea mayor

    for (class AZombies* ZombiePro : zombiesCon)
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
        if (ZombiePro && ZombiePro->ZombieMovido02==false && IgnorarPrimerZombie==true)
        {
            // Comparar vidas y actualizar si se encuentra una vida más alta
            if (ZombiePro->GetVida() > MaxLife)
            {
                MaxLife = ZombiePro->GetVida();
                ZombieWithMaxLife = ZombiePro;
                ZombieWithMaxLife->ZombieMovido02 = true;
            }
        }
    }
    ZombieWithMaxLife->ZombieMovido = true;
    return ZombieWithMaxLife;
}

void AOrdenarZombieHorizontal::cambiarUbicacion(float _DeltaTime, int Ubi)
{
    FVector Direction = Localizaciones[Ubi] - ZombieMovido->GetActorLocation();
    Direction.Normalize();

    // Establece la nueva ubicación basada en la dirección y una velocidad de movimiento (ajusta según sea necesario)
    float VelocidadMovimiento = 100.0f; // Ajusta este valor según sea necesario
    FVector NuevaUbicacion = ZombieMovido->GetActorLocation() + Direction * VelocidadMovimiento * _DeltaTime;

    // Mueve el actor a la nueva ubicación
    ZombieMovido->SetActorLocation(NuevaUbicacion);
}

void AOrdenarZombieHorizontal::CastPlanta(AActor* Planta, AActor* Torre)
{
    PlantasObservados = Cast<APlantasObservados>(Planta);
    TorreLocalizacion = Cast<ATorreLocalizacion>(Torre);
    PosicionPlanta01 = PlantasObservados->GetPocisionObservador() + FVector(0.0f, 1000.0f, 0.0f);
    //----------------------Localizaciones De Zombies----------------------
    Localizaciones.Add(PosicionPlanta01);
    Localizaciones.Add(PosicionPlanta01 + FVector(-200.0f, 0.0f, 0.0f));
    Localizaciones.Add(PosicionPlanta01 + FVector(200.0f, 0.0f, 0.0f));
    Localizaciones.Add(PosicionPlanta01 + FVector(400.0f, 0.0f, 0.0f));
    Localizaciones.Add(PosicionPlanta01 + FVector(-600.0f, 0.0f, 0.0f));
    Localizaciones.Add(PosicionPlanta01 + FVector(-400.0f, 0.0f, 0.0f));
}

