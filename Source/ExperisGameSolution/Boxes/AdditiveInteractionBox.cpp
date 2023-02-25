// Fill out your copyright notice in the Description page of Project Settings.


#include "../Boxes/AdditiveInteractionBox.h"
#include "../HealthComponent.h"

void AAdditiveInteractionBox::OnApplyHealthUpdate_Implementation(UHealthComponent* PlayerHealth)
{
	if (PlayerHealth)
	{
		float CurrentHealth = PlayerHealth->GetCurrentHealth();
		PlayerHealth->SetCurrentHealth(CurrentHealth += HealthIncrease);
	}
}