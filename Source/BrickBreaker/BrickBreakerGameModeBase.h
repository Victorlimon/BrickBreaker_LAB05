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

	ABrickBreakerGameModeBase();
	virtual void BeginPlay() override;
	void SpawnNewBrick();


	///////////////////ARCANOID/////////////

	//ABrick* Brick;
	TArray<ABrick*> ContBrick;


protected:

	ABrick* MyBrick;
	FVector SpawnLocation = FVector(0.0f, 0.0f, 300.0f);
	FRotator SpawnRotator = FRotator(0.0f, 0.0f, 0.0f);
};
