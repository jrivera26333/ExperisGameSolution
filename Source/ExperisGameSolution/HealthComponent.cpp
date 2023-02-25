// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	CurrentHealth = MaxHealth;
	// ...
}

void UHealthComponent::SetCurrentHealth(float TargetHealth)
{
	CurrentHealth = TargetHealth;

	if (CurrentHealth <= 0.f)
	{
		if (OnCharacterDeath.IsBound())
			OnCharacterDeath.Broadcast();
	}

	UE_LOG(LogTemp, Warning, TEXT("Current Health: %f"), TargetHealth);
}
