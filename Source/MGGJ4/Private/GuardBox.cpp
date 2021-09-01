// Fill out your copyright notice in the Description page of Project Settings.

#include "AbstractFighter.h"
#include "GuardBox.h"

void UGuardBox::HandleDamage(float dmg)
{
	if (_fighter != nullptr) {
		_fighter->TakeDamage(dmg*damageModifier);
	}
}