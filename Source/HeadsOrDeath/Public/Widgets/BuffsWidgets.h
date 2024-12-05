// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BuffsWidgets.generated.h"

/**
 * 
 */
UCLASS()
class HEADSORDEATH_API UBuffsWidgets : public UUserWidget
{
	GENERATED_BODY()

	
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* BuffTextBlock;
	
	FTimerHandle ResetTextBox;

public:
	void Highlight(FText BuffName, FColor BuffOrDebuffColor);
	void ResetTextbox();
	
	
};
