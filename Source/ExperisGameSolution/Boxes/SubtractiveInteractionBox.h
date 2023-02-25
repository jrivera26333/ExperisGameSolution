// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../InteractionBox.h"
#include "SubtractiveInteractionBox.generated.h"

/**
 * 
 */
UCLASS()
class EXPERISGAMESOLUTION_API ASubtractiveInteractionBox : public AInteractionBox
{
	GENERATED_BODY()

public:	
	virtual void OnApplyHealthUpdate_Implementation(class UHealthComponent* PlayerHealth) override;

	UFUNCTION(BlueprintCallable)
	float GetDamageToApply() const { return Damage; }

private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true), Category = "Damage")
	float Damage = 5.f;
	
};
