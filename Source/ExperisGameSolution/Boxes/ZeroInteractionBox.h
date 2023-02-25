// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../InteractionBox.h"
#include "ZeroInteractionBox.generated.h"

/**
 * 
 */
UCLASS()
class EXPERISGAMESOLUTION_API AZeroInteractionBox : public AInteractionBox
{
	GENERATED_BODY()

public:
	virtual void OnApplyHealthUpdate_Implementation(class UHealthComponent* PlayerHealth) override;
	
};
