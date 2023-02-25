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
	virtual void OnApplyHealthUpdate_Implementation(class UHealthComponent* PlayerHealth) override {};

private:

	virtual void BeginPlay() override;

	UPROPERTY()
	class UBoxComponent* BoxCollision;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
