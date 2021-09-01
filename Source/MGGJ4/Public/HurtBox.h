// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneralHitBox.h"
#include "HurtBox.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = "Collision", hidecategories = (Object, LOD, Lighting, TextureStreaming), editinlinenew, Blueprintable, meta = (DisplayName = "Hurt Box", BlueprintSpawnableComponent))
class MGGJ4_API UHurtBox : public UGeneralHitBox
{
	GENERATED_BODY()
public:

	virtual void HandleDamage(float dmg) override;

};
