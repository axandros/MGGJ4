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
	static const float _MAX_HEALTH;
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _health = _MAX_HEALTH;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isPlayerOne = false;

	/** Called for side to side input */
	void MoveRight(float Val);

	// Input handlers
	void HandleJab();
	//void StopJab();
	void HandleStrike();
	//void StopStrike();
	void HandleGuard();
	void HandleJump();

	// Actor Interface
	void Tick(float deltaTime);
	// End Actor Interface
	
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface


public:
	AAbstractFighter();

	void TakeDamage(float damageToTake);

	// Getters
	UFUNCTION(BlueprintPure)
	static float GetMaxHealth(){return _MAX_HEALTH;}

	// Getters
	UFUNCTION(BlueprintPure)
	float GetHealthPercent() { return _health/_MAX_HEALTH; }

	UFUNCTION(BlueprintCallable)
	void SetAsPlayerOne (bool playerOne){ _isPlayerOne = playerOne;}
};

