// Fill out your copyright notice in the Description page of Project Settings.


#include "AbstractFighter.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AAbstractFighter::AAbstractFighter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = false; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;


}

void AAbstractFighter::MoveRight(float Val)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f, -1.f, 0.f), Val);
}

void AAbstractFighter::HandleJab()
{
}

void AAbstractFighter::HandleStrike()
{
}

void AAbstractFighter::HandleGuard()
{
}

void AAbstractFighter::HandleJump()
{
}

// Called to bind functionality to input
void AAbstractFighter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jab", IE_Pressed, this, &AAbstractFighter::HandleJab);
	//PlayerInputComponent->BindAction("Jab", IE_Released, this, &ACharacter::StopJab);
	PlayerInputComponent->BindAction("Strike", IE_Pressed, this, &AAbstractFighter::HandleStrike);
	//PlayerInputComponent->BindAction("Strike", IE_Released, this, &ACharacter::StopStrike);
	PlayerInputComponent->BindAction("Guard", IE_Pressed, this, &AAbstractFighter::HandleGuard);
	//PlayerInputComponent->BindAction("Guard", IE_Released, this, &ACharacter::StopGuard);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveRight", this, &AAbstractFighter::MoveRight);

}

