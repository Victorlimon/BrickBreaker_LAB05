// Copyright Epic Games, Inc. All Rights Reserved.


#include "BrickBreakerGameModeBase.h"
#include "Pila.h"
#include "Brick.h"
#include "Pila01.h"

ABrickBreakerGameModeBase::ABrickBreakerGameModeBase()
{

}

void ABrickBreakerGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SpawnNewBrick();

	ContBrick.Add(MyBrick);

	////////////////////////////ARCANOID///////////////////////////////////////
	
	//const FVector Ubicacion(0.0f, 250.0f, 350.0f);
	//const FRotator Rotacion(0.0f, 0.0f, 0.0f);

	//UWorld* const World = GetWorld();

	//if (World != nullptr) {
	//	// Spawn o generacion o creacion de actores en tiempo de ejecucion
	//	Brick = World->SpawnActor<ABrick>(Ubicacion, Rotacion);
	//	Brick->SetHidden(false);
	//	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Cyan, TEXT("Actor ladrillo 01 creado"));

	//}

	//ContBrick.Add(Brick);

	//ContBrick.Remove(Brick);
	//Brick->SetActorTickEnabled(true);
	//Brick->SetActorHiddenInGame(false);
	//Brick->SetActorEnableCollision(true);
}

void ABrickBreakerGameModeBase::SpawnNewBrick()
{

	if (!MyBrick) {
		MyBrick = nullptr;
	}

	UWorld* const World = GetWorld();

	if (World != nullptr) {

		MyBrick = GetWorld()->SpawnActor<ABrick>(SpawnLocation, SpawnRotator);
		MyBrick->SetHidden(false);
	}
	
}
