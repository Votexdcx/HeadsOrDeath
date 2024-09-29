// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "JonAnimInstance.generated.h"

class UCharacterMovementComponent;
/**
 * 
 */
UCLASS()
class HEADSORDEATH_API UJonAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
protected:
	UPROPERTY(BlueprintReadOnly)
	class AJon *Jon;

	UPROPERTY(BlueprintReadOnly)
	UCharacterMovementComponent *JonMovementComponent;

	UPROPERTY(BlueprintReadOnly ,Category = "Movement");
	float Speed;
};
