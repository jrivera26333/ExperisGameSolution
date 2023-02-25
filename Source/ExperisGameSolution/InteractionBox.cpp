// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionBox.h"
#include "Components/BoxComponent.h"
#include "HealthComponent.h"

void AInteractionBox::BeginPlay()
{
	Super::BeginPlay();
	BoxCollision = FindComponentByClass<UBoxComponent>();

	if (BoxCollision)
		BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &AInteractionBox::OnOverlapBegin);
}

void AInteractionBox::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UHealthComponent* HealthComponent = OtherActor->FindComponentByClass<UHealthComponent>();
	UE_LOG(LogTemp, Warning, TEXT("Overlapped Called"));

	if (HealthComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("Health Interface Fired!"));
		OnApplyHealthUpdate_Implementation(HealthComponent);
	}
}