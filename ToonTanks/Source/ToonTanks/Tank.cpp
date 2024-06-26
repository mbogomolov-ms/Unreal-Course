// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "TimerManager.h"
#include "TanksGameMode.h"
#include "DrawDebugHelpers.h"

ATank::ATank()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

void ATank::BeginPlay()
{
	Super::BeginPlay();

	TanksGameMode = Cast<ATanksGameMode>(UGameplayStatics::GetGameMode(this));
	TankPlayerController = Cast<APlayerController>(GetController());
}

void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (TankPlayerController)
	{
		FHitResult HitResult;
		TankPlayerController->GetHitResultUnderCursor(
			ECollisionChannel::ECC_Visibility,
			false,
			HitResult);

		//DrawDebugSphere(
		//	GetWorld(),
		//	HitResult.ImpactPoint,//GetActorLocation() + FVector(0.f, 0.f, 200.f),
		//	30.f,
		//	12,
		//	FColor::Red,
		//	false,
		//	-1.f);

		RotateTurret(HitResult.ImpactPoint);
		RotateSpringArm(HitResult.ImpactPoint);
	}
}

void ATank::HandleDestruction()
{
	Super::HandleDestruction();

	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);

	bAlive = false;
}

void ATank::Move(float Value)
{
	//UE_LOG(LogTemp, Warning, TEXT("Value: %f"), Value);
	FVector DeltaLocation = FVector::ZeroVector;
	DeltaLocation.X = Value * SpeedModifier * UGameplayStatics::GetWorldDeltaSeconds(this);
	AddActorLocalOffset(DeltaLocation, true);
}

void ATank::Turn(float Value)
{
	FRotator deltaRotation = FRotator::ZeroRotator;
	deltaRotation.Yaw = Value * RotationModifier * UGameplayStatics::GetWorldDeltaSeconds(this);
	AddActorLocalRotation(deltaRotation, true);
}

void ATank::RotateSpringArm(FVector LookTarget)
{
	FVector ToTarget = LookTarget - SpringArm->GetComponentLocation();
	FRotator LookAtRotation = FRotator(SpringArm->GetComponentRotation().Pitch, ToTarget.Rotation().Yaw, SpringArm->GetComponentRotation().Roll);
	SpringArm->SetWorldRotation(LookAtRotation);
		/*FMath::RInterpTo(
			SpringArm->GetComponentRotation(),
			LookAtRotation,
			UGameplayStatics::GetWorldDeltaSeconds(this),
			1.5));*/
}

void ATank::PrepareToFire()
{
	if (isLoaded)
	{
		Fire();
		isLoaded = false;
		TanksGameMode->OnTankGunLoadStatusChanged(isLoaded);
	}
	else
	{
		if (!GetWorldTimerManager().IsTimerActive(ReloadTimerHandle))
		{
			GetWorldTimerManager().SetTimer(ReloadTimerHandle, this, &ATank::LoadCannon, ReloadCooldown, true);
		}
	}
}

void ATank::LoadCannon()
{
	isLoaded = true;
	TanksGameMode->OnTankGunLoadStatusChanged(isLoaded);
}

void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::Move);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATank::Turn);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ATank::PrepareToFire);
}
