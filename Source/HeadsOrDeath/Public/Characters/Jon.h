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

	class AJonPlayerController* AJonPlayerControllerVar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCameraComponent *CameraReal;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	//Input Functions
	void Movefoward(float Value);
	void Moveside(float Value);
	void Lookup(float Value);
	void Lookaround(float Value);
	void Slide(float Value);



	//slide funtions

	void Jump() override;

	
	class USpringArmComponent *SpringArm;

	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent *SkeletalMesh;
	class UBuffDebuffComponent* BuffDebuffComponent;
	FTimerHandle SlideTimeHandler;
	FTimerHandle SlideTimeHandler2;


	//Slide

	//Slide functions
	void BeginSlide();
	void Sliding();
	void EndSlide();
	void SlideCooldown();



	//Slide Variables
	float MaxWalkSpeed;
	float SlideSpeed;




	//Buff Code

private:

	FTimerHandle ResetCooldownTimerHandle;

	
public:

	//Variable
	UPROPERTY(BlueprintReadOnly, Category="Buff")
	int BuffSelection;
	
	//Buff Functions
public:
	FVector CameraDirection(EAxis::Type Direction);



	//Attack

public:
	
	UPROPERTY(BlueprintReadOnly)
	float BaseDamage = 10.f;

	UPROPERTY(BlueprintReadOnly)
	float Shield = 1;
	
	UPROPERTY(BlueprintReadWrite)
	float PlayerHealth = 100.f;

	UPROPERTY(BlueprintReadOnly)
	float PistolDamage = 15.f;
	
	UPROPERTY(BlueprintReadWrite)
	int Points = 0.f;

	
};
