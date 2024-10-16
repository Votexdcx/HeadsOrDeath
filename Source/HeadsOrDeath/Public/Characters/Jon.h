// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Jon.generated.h"

UCLASS()
class HEADSORDEATH_API AJon : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AJon();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	bool CanSlide;

	UPROPERTY(EditAnywhere)
	class UCameraComponent *CameraReal;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	//Input Functions
	void Movefoward(float Value);
	void Moveside(float Value);
	void Lookup(float Value);
	void Lookaround(float Value);
	void Slide(float Value);
	
	class USpringArmComponent *SpringArm;

	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent *SkeletalMesh;

	FTimerHandle SlideTimeHandler;
	FTimerHandle SlideTimeHandler2;

	//GamePlay

	FVector CameraDirection(EAxis::Type Direction);

	//Slide

	//Slide functions
	void BeginSlide();
	void Sliding();
	void EndSlide();
	void SlideCooldown();


	//Slide Variables
	float MaxWalkSpeed;
	float SlideSpeed;
	
};
