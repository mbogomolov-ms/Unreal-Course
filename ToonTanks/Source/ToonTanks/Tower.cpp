// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank.h"
#include "TimerManager.h"
#include "Tower.h"

void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CheckArmDistance())
	{
		RotateTurret(Tank->GetActorLocation());
	}
}

void ATower::HandleDestruction()
{
	Super::HandleDestruction();
	Destroy();
}

void ATower::BeginPlay() 
{
	Super::BeginPlay();

	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));

	GetWorldTimerManager().SetTimer(FireRateTimerHandle, this, &ATower::CheckFireCondition, FireRate, true);
}

void ATower::CheckFireCondition()
{
	if (CheckArmDistance() && Tank->bAlive)
	{
		Fire();
	}
}

bool ATower::CheckArmDistance()
{
	if (!Tank)
	{
		return false;
	}

	FVector TankLocation = Tank->GetActorLocation();
	float Distance = FVector::Dist(GetActorLocation(), TankLocation);

	return Distance <= FireRange;
}
