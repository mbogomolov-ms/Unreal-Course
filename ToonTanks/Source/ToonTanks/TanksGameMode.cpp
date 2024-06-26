// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "TanksPlayerController.h"
#include "Tank.h"
#include "TanksGameMode.h"
#include "Tower.h"

void ATanksGameMode::BeginPlay()
{
	Super::BeginPlay();

	HandleGameStart();
}

void ATanksGameMode::HandleGameStart()
{
	TargetTowers = GetTargetTowerCount();
	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
	TanksPlayerController = Cast<ATanksPlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	StartGame();

	if (TanksPlayerController)
	{
		TanksPlayerController->SetPlayerEnabled(false);

		FTimerHandle PlayerEnableTimerHandle;

		FTimerDelegate PlayerEnableTimerDelegate = FTimerDelegate::CreateUObject(
			TanksPlayerController,
			&ATanksPlayerController::SetPlayerEnabled,
			true);
		
		GetWorldTimerManager().SetTimer(
			PlayerEnableTimerHandle,
			PlayerEnableTimerDelegate,
			StartDelay,
			false);
	}
}


void ATanksGameMode::ActorDied(AActor* DeadActor)
{
	if (DeadActor == Tank)
	{
		Tank->HandleDestruction();
		if (TanksPlayerController)
		{
			TanksPlayerController->SetPlayerEnabled(false);
		}
		GameOver(false);
	}
	else if (ATower* DestroyedTower = Cast<ATower>(DeadActor))
	{
		DestroyedTower->HandleDestruction();

		TargetTowers--;
		if (TargetTowers <= 0)
		{
			GameOver(true);
		}
	}
}

int32 ATanksGameMode::GetTargetTowerCount()
{
	TArray<AActor*> ActiveTowers;
	UGameplayStatics::GetAllActorsOfClass(this, ATower::StaticClass(), ActiveTowers);
	return ActiveTowers.Num();
}
