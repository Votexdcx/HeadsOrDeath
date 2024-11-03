// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/BuffsWidgets.h"
#include "Components/TextBlock.h"



void UBuffsWidgets::Highlight(FText BuffName, FColor BuffOrDebuffColor)
{
	BuffTextBlock->SetText(BuffName);
	BuffTextBlock->SetColorAndOpacity(BuffOrDebuffColor);
	GetWorld()->GetTimerManager().SetTimer(ResetTextBox,this,&UBuffsWidgets::ResetTextbox, 10.f, false);
}

void UBuffsWidgets::ResetTextbox()
{
	BuffTextBlock->SetText(FText::FromString(""));
}
