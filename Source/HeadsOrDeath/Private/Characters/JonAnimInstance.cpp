 // Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/JonAnimInstance.h"
#include "Characters/Jon.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

 void UJonAnimInstance::NativeInitializeAnimation()
 {
	Super::NativeInitializeAnimation();
 	Jon =Cast<AJon>(TryGetPawnOwner());
	if (Jon != nullptr)
	{
		JonMovementComponent = Jon->GetCharacterMovement();
	}
 }

 void UJonAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
 {
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (JonMovementComponent !=nullptr)
	{
	 Speed = UKismetMathLibrary::VSizeXY(JonMovementComponent->Velocity);
	}
 	SlideAnimation(DeltaSeconds);
 }

 void UJonAnimInstance::SlideAnimation(float DeltaSeconds)
 {
 	if (Jon == nullptr)
 	{
 		return;
 	}
 	if (Jon->CanSlide == true)
 	{
 		UE_LOG(LogTemp, Warning, TEXT("canplayslideanim true"));
 		CanPlaySlideAnim = true;
 	}
 	else
 	{
 		CanPlaySlideAnim = false;
 	}
 }
