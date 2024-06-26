// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/GameplayStatics.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	void HandleDestruction();


protected:
	void RotateTurret(FVector TargetToLookAT);

	void Fire();
	
	UPROPERTY(VisibleAnywhere, Category = "Custom Category", meta = (AllowedPrivateAccess = true))
	class UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere, Category = "Custom Category", meta = (AllowedPrivateAccess = true))
	class UStaticMeshComponent* TurretMesh;

private:

	UPROPERTY(VisibleAnywhere, Category = "Custom Category", meta = (AllowedPrivateAccess = true))
	class UCapsuleComponent* CapsuleComp;
	UPROPERTY(VisibleAnywhere, Category = "Custom Category", meta = (AllowedPrivateAccess = true))
	class USceneComponent* ProjectileSpawnPoint;

	UPROPERTY(EditDefaultsOnly, Category = "Custom Category")
	TSubclassOf<class AProjectile> ProjectileBlueprint;

	UPROPERTY(EditAnywhere, Category = "Custom Category")
	class UParticleSystem* DeathParticles;

	UPROPERTY(EditAnywhere, Category = "Custom Category")
	USoundBase* DeathSound;

	UPROPERTY(EditAnywhere, Category = "Projectile Setup")
	TSubclassOf<class UCameraShakeBase> DeathCameraShakeClass;

};
