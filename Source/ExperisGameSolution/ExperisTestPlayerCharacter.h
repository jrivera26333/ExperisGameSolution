// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ExperisGameSolutionCharacter.h"
#include "ExperisTestPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class EXPERISGAMESOLUTION_API AExperisTestPlayerCharacter : public AExperisGameSolutionCharacter
{
	GENERATED_BODY()
	

private:

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Player Stats")
	float MaxHealth = 20.f;

	float CurrentHealth;

public:

	UFUNCTION(BlueprintCallable)
	float GetMaxHealth() const { return MaxHealth; }

	UFUNCTION(BlueprintCallable)
	float GetCurrentHealth() const { return CurrentHealth; }
};
