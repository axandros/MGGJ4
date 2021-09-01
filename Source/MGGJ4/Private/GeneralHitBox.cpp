// Fill out your copyright notice in the Description page of Project Settings.

#include "AbstractFighter.h"
#include "GeneralHitBox.h"

void UGeneralHitBox::BeginPlay() {
	Super::BeginPlay();

	_fighter = Cast<AAbstractFighter>(GetOwner());
 }