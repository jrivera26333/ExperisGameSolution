// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../InteractionBox.h"
#include "AdditiveInteractionBox.generated.h"

/**
 * 
 */
UCLASS()
class EXPERISGAMESOLUTION_API AAdditiveInteractionBox : public AInteractionBox
{
	GENERATED_BODY()

public:
	virtual void OnApplyHealthUpdate_Implementation(class UHealthComponent* PlayerHealth) override;

	UFUNCTION(BlueprintCallable)
	float GetHealthIncrease() const { return HealthIncrease; }

private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Damage")
	float HealthIncrease = 5.f;
	
};
