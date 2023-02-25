// Fill out your copyright notice in the Description page of Project Settings.


#include "../Boxes/AdditivePercentInteractionBox.h"
#include "../HealthComponent.h"

void AAdditivePercentInteractionBox::OnApplyHealthUpdate_Implementation(UHealthComponent* PlayerHealth)
{
	if (PlayerHealth)
	{
		float CurrentHealth = PlayerHealth->GetCurrentHealth();
		float AddedHealth = (PlayerHealth->GetMaxHealth() * (HealthPercentIncrease / 100.f));
		PlayerHealth->SetCurrentHealth(CurrentHealth += (PlayerHealth->GetMaxHealth() * (HealthPercentIncrease / 100.f)));
	}
}