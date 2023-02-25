// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../InteractionBox.h"
#include "AdditivePercentInteractionBox.generated.h"

/**
 * 
 */
UCLASS()
class EXPERISGAMESOLUTION_API AAdditivePercentInteractionBox : public AInteractionBox
{
	GENERATED_BODY()

public:
	virtual void OnApplyHealthUpdate_Implementation(class UHealthComponent* PlayerHealth) override;

	UFUNCTION(BlueprintCallable)
	float GetHealthPercentIncrease() const { return HealthPercentIncrease / 100.f; }

private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Damage")
	float HealthPercentIncrease = 33.f;
	
};
