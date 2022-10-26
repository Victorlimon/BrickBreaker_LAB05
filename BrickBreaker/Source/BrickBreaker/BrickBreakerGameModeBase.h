// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BrickBreakerGameModeBase.generated.h"
class ABrick;
/**
 * 
 */
UCLASS()
class BRICKBREAKER_API ABrickBreakerGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:

	virtual void BeginPlay() override;

	ABrick* Brick;
	/*TArray<ABrick*> contenedorBrick;


	UPROPERTY(EditAnywhere)
		TSubclassOf<ABrick> BrickObj;

	FVector SpawnLocation = FVector(0.0f, 0.0f, 100.0f);
	FRotator SpawnRotator = FRotator(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

	void SpawnedBrick();*/

	//Pila<ABrick*> contenedorBrick;
	//APila01* contenedorBrick;
};
