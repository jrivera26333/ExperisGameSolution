// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "BoxEffectInterface.h"
#include "InteractionBox.generated.h"

/**
 * 
 */
UCLASS()
class EXPERISGAMESOLUTION_API AInteractionBox : public ATriggerBox, public IBoxEffectInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	virtual void OnApplyHealthUpdate_Implementation(class UHealthComponent* PlayerHealth) override {};
};
