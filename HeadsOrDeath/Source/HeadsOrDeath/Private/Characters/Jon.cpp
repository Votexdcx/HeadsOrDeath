// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Jon.h"

// Sets default values
AJon::AJon()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AJon::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

