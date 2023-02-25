// Fill out your copyright notice in the Description page of Project Settings.


#include "../Boxes/SubtractiveInteractionBox.h"
#include "../HealthComponent.h"

void ASubtractiveInteractionBox::OnApplyHealthUpdate_Implementation(UHealthComponent* PlayerHealth)
{
	if (PlayerHealth)
	{
		PlayerHealth->SetCurrentHealth(PlayerHealth->GetCurrentHealth() - Damage);
	}
}