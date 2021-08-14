// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbstractFighter.generated.h"

UCLASS()
class AAbstractFighter : public ACharacter
{
	GENERATED_BODY()
private:
	static const float _MAX_HEALTH = 100.0f;

protected:

	float _health = _MAX_HEALTH;

	/** Called for side to side input */
	void MoveRight(float Val);

	// Input handlers
	void HandleJab();
	//void StopJab();
	void HandleStrike();
	//void StopStrike();
	void HandleGuard();
	void HandleJump();

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface


public:
	AAbstractFighter();

	void TakeDamage(float damageToTake);
};

