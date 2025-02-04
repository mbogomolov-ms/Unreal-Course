// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

/**
 * 
 */
UCLASS()
class PRIMITIVESHOOTER_API AShooterAIController : public AAIController
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	bool IsDead() const;

private:
	/*UPROPERTY(EditAnywhere)
	float AcceptanceRadius = 200;*/
	
	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehavior;
};
