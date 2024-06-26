// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()
	

public:
	ATank();

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	virtual void Tick(float DeltaTime) override;

	void HandleDestruction();

	APlayerController* GetTankPlayerController() const { return TankPlayerController;  }

	bool bAlive = true;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "TankSpecificProperties", meta = (AllowedPrivateAccess = true))
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category = "TankSpecificProperties", meta = (AllowedPrivateAccess = true))
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = "TankSpecificProperties", meta = (AllowedPrivateAccess = true))
	float SpeedModifier;
	UPROPERTY(EditAnywhere, Category = "TankSpecificProperties", meta = (AllowedPrivateAccess = true))
	float RotationModifier;
	
	UPROPERTY(EditAnywhere, Category = "TankSpecificProperties", meta = (AllowedPrivateAccess = true))
	float ReloadCooldown;

	bool isLoaded = true;
	
	FTimerHandle ReloadTimerHandle;
	
	void Move(float Value);
	
	void Turn(float Value);

	void RotateSpringArm(FVector LookTarget);

	void PrepareToFire();

	void LoadCannon();

	APlayerController* TankPlayerController;

	class ATanksGameMode* TanksGameMode;
};
