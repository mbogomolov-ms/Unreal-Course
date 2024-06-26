// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/Pawn.h"
#include "TanksPlayerController.h"

void ATanksPlayerController::SetPlayerEnabled(bool bPlayerController)
{
	if (bPlayerController)
	{
		GetPawn()->EnableInput(this);
	}
	else
	{
		GetPawn()->DisableInput(this);
	}
	bShowMouseCursor = bPlayerController;
}
