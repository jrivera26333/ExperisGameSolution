// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	CurrentHealth = MaxHealth;
	// ...
}

void UHealthComponent::SetCurrentHealth(float TargetHealth)
{
	CurrentHealth = FMath::Clamp<float>(TargetHealth, 0.0f, MaxHealth);

	if (CurrentHealth <= 0.f)
	{
		if (OnCharacterDeath.IsBound())
			OnCharacterDeath.Broadcast();
	}
}
