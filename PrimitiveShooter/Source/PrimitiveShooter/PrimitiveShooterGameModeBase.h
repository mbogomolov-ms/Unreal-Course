// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PrimitiveShooterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PRIMITIVESHOOTER_API APrimitiveShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled);
	
};
