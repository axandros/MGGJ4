// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AbstractFighter.h"
#include "FightingGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MGGJ4_API AFightingGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player References")
	AAbstractFighter* PlayerOne;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
		AAbstractFighter* PlayerTwo;
};
