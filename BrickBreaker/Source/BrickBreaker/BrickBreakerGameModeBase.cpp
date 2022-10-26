// Copyright Epic Games, Inc. All Rights Reserved.


#include "BrickBreakerGameModeBase.h"
#include "Pila.h"
#include "Brick.h"
#include "Pila01.h"

void ABrickBreakerGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	
	//SpawnedBrick();

	////////////////////////////ARCANOID///////////////////////////////////////
	
	const FVector Ubicacion(20.0f, 50.0f, 100.0f);
	const FRotator Rotacion(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();

	if (World != nullptr) {
		// Spawn o generacion o creacion de actores en tiempo de ejecucion
		Brick = World->SpawnActor<ABrick>(Ubicacion, Rotacion);
		Brick->SetHidden(false);
		GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Cyan, TEXT("Actor ladrillo 01 creado"));

	}
}

//void ABrickBreakerGameModeBase::SpawnedBrick()
//{
//	//UE_LOG(LogTemp, Warning, TEXT("apareciendo Brick"));
//
//	//if (!Brick)
//	//{
//	//	Brick = nullptr;
//	//}
//
//	//if (BrickObj)
//	//{
//	//	Brick = GetWorld()->SpawnActor<ABrick>(BrickObj, SpawnLocation, SpawnRotator, SpawnInfo);
//	//	//MyBall = GetWorld()->SpawnActor<ABall>(FVector(0, 0, 200), FRotator::ZeroRotator);
//	//	/*Brick = GetWorld()->SpawnActor<ABrick>(BrickObj, FVector(0, 0, 300), SpawnRotator, SpawnInfo);*/
//	//}
//
//	//Brick->SetActorTickEnabled(false);
//	//Brick->SetActorHiddenInGame(true);
//	//Brick->SetActorEnableCollision(false);
//	////Brick = GetWorld()->SpawnActor<ABrick>(BrickObj, SpawnLocation, SpawnRotator, SpawnInfo);
//
//	//contenedorBrick.Add(Brick);
//}
