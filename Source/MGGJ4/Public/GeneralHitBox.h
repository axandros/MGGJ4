// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GeneralHitBox.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class MGGJ4_API UGeneralHitBox : public UBoxComponent
{
	GENERATED_BODY()

public:

	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float damageModifier = 1.0f;

	UFUNCTION(BlueprintCallable)
		virtual void HandleDamage(float dmg) PURE_VIRTUAL(UGeneralHitBox::HandleDamage);
	
protected:
	class AAbstractFighter* _fighter;
};
