// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeathAction);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXPERISGAMESOLUTION_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

public:	

	UFUNCTION(BlueprintCallable)
	float GetMaxHealth() const { return MaxHealth; }

	UFUNCTION(BlueprintCallable)
	float GetCurrentHealth() const { return CurrentHealth; }

	UPROPERTY(BlueprintAssignable)
	FOnDeathAction OnCharacterDeath;

	void SetCurrentHealth(float TargetHealth);

private:

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Player Stats")
	float MaxHealth = 20.f;

	float CurrentHealth;
};
