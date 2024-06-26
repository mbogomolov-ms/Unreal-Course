// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "TanksGameMode.h"
#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	Health = MaxHealth;

	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::ApplyDamage);

	TanksGameMode = Cast<ATanksGameMode>(UGameplayStatics::GetGameMode(this));
}



// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::ApplyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* Instigator, AActor* DamageCauser)
{
	if (Damage <= 0.f) return;

	Health -= Damage;

	if (Health <= 0.f && TanksGameMode)
	{
		TanksGameMode->ActorDied(DamagedActor);
		UE_LOG(LogTemp, Warning, TEXT("ActorDied: %s , Health left: %f"), *DamagedActor->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Damaged: %s , DamageDealer: %s , Health left: %f"), *DamagedActor->GetName(), *DamageCauser->GetName(), Health);
	}

}
