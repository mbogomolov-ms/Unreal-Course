// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class TOONTANKS_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Projectile Setup")
	class UStaticMeshComponent* ProjectileMesh;
	UPROPERTY(VisibleAnywhere, Category = "Projectile Setup", meta = (AllowedPrivateAccess = true))
	class UProjectileMovementComponent* MovementComponent;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* HittedActor, UPrimitiveComponent* OtherHitComp, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(EditAnywhere)
	float Damage = 50.f;

	UPROPERTY(EditAnywhere, Category = "Projectile Setup")
	class UParticleSystem* HitParticles;

	UPROPERTY(VisibleAnywhere, Category = "Projectile Setup")
	class UParticleSystemComponent* TrailParticleComponent;

	UPROPERTY(EditAnywhere, Category = "Projectile Setup")
	class USoundBase* LaunchSound;
	
	UPROPERTY(EditAnywhere, Category = "Projectile Setup")
	USoundBase* HitSound;

	UPROPERTY(EditAnywhere, Category = "Projectile Setup")
	TSubclassOf<class UCameraShakeBase> HitCameraShakeClass;
};
