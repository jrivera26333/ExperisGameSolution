// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "InteractionActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXPERISGAMESOLUTION_API UInteractionActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractionActorComponent();

	FGameplayTagContainer GetBoxInteractionTags() const { return BoxInteractionTags; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;	

private:
	ACharacter* CurrentCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true), Category = "Player Stats")
	FGameplayTagContainer BoxInteractionTags;
};
