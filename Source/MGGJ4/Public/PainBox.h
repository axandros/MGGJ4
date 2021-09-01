// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneralHitBox.h"
#include "PainBox.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = "Collision", hidecategories = (Object, LOD, Lighting, TextureStreaming), editinlinenew, Blueprintable, meta = (DisplayName = "Pain Box", BlueprintSpawnableComponent))
class MGGJ4_API UPainBox : public UGeneralHitBox
{
	GENERATED_BODY()
	public:
		virtual void HandleDamage(float dmg) override;
};
