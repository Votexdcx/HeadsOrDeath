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

	UPROPERTY(BlueprintReadWrite, Category = "AnimationAsset")
	UAnimMontage *SlideAnimMontage;
	bool CanSlide = false;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	void ResetSlide();
	void Movefoward(float Value);
	void Moveside(float Value);
	void Lookup(float Value);
	void Lookaround(float Value);
	void Slide(float Value);
	
	UPROPERTY(VisibleAnywhere)
	class UCameraComponent *Camera;
	
	UPROPERTY(EditAnywhere)
	class USpringArmComponent *SpringArm;

	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent *SkeletalMesh;

	FTimerHandle SlideTimeHandler;
};
