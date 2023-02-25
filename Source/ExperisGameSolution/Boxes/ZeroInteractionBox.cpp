// Fill out your copyright notice in the Description page of Project Settings.


#include "../Boxes/ZeroInteractionBox.h"
#include "../HealthComponent.h"

void AZeroInteractionBox::OnApplyHealthUpdate_Implementation(UHealthComponent* PlayerHealth)
{
	if (PlayerHealth)
	{
		PlayerHealth->SetCurrentHealth(0.f);
	}
}