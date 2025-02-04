// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"


UTriggerComponent::UTriggerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (Mover == nullptr)
		return;

	AActor* Actor = GetAcceptableActor();
	if (Actor != nullptr)
	{
		UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(Actor->GetRootComponent());
		if (Component != nullptr) 
		{
			Component->SetSimulatePhysics(false);
			Actor->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
		}

		//UE_LOG(LogTemp, Display, TEXT("SetShouldMoveTrue: %s"), *this->GetName());

		Mover->SetShouldMover(true);
		//UE_LOG(LogTemp, Display, TEXT("There is an Actor"));
	}
	else
	{
		Mover->SetShouldMover(false);
	}
}

void UTriggerComponent::SetMover(UMover* NewMover)
{
	Mover = NewMover;
}

AActor* UTriggerComponent::GetAcceptableActor() const
{
	TArray<AActor*> Actors;
	GetOverlappingActors(Actors);

	for (AActor* Actor : Actors)
	{
		//UE_LOG(LogTemp, Display, TEXT("ActorsTagCheck: %s"), *Actor->GetName());
		if (Actor->ActorHasTag(TriggerTag) && !Actor->ActorHasTag("Grabbed"))
		{
			//UE_LOG(LogTemp, Display, TEXT("ProperActorFound: %s"), *this->GetName());
			return Actor;
		}
	}

	return nullptr;
}
