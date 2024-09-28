// Fill out your copyright notice in the Description page of Project Settings.



#include "Characters/Jon.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
// Sets default values
AJon::AJon()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));

	SpringArm->SetupAttachment(RootComponent);
	Camera->SetupAttachment(SpringArm);
	
	AutoPossessPlayer = EAutoReceiveInput::Player0;

}

// Called when the game starts or when spawned
void AJon::BeginPlay()
{
	Super::BeginPlay();
	
}

void AJon::Movefoward(float Value)
{
	if (Controller != nullptr && Value)
	{
		FRotator CameraYaw = FRotator(0,Controller->GetControlRotation().Yaw,0);
		FVector Forward  = FRotationMatrix(CameraYaw).GetUnitAxis(EAxis::X);
		//UE_LOG(LogTemp, Warning, TEXT("adfas %f"), Forward.X);
		AddMovementInput(Forward, Value);
	}
}

void AJon::Moveside(float Value)
{
	if (Controller != nullptr && Value)
	{
		FRotator CameraYaw = FRotator(0,Controller->GetControlRotation().Yaw,0);
		FVector Right  = FRotationMatrix(CameraYaw).GetUnitAxis(EAxis::Y);
		//UE_LOG(LogTemp, Warning, TEXT("sadljsd"));
		AddMovementInput(Right, Value);
	}
}

void AJon::Lookup(float Value)
{
	
	float Pitch = Controller->GetControlRotation().Pitch;
	AddControllerPitchInput(Value);
	UE_LOG(LogTemp, Warning, TEXT("Pitch %f"), Pitch);
	
}

void AJon::Lookaround(float Value)
{
	float Yaw = Controller->GetControlRotation().Yaw; 
	UE_LOG(LogTemp, Warning, TEXT("Yaw %f"),Yaw);
	AddControllerYawInput(Value);
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

	PlayerInputComponent->BindAxis("MoveFoward",this, &AJon::Movefoward);
	PlayerInputComponent->BindAxis("MoveSide",this, &AJon::Moveside);
	PlayerInputComponent->BindAxis("Lookup",this, &AJon::Lookup);
	PlayerInputComponent->BindAxis("LookSide",this, &AJon::Lookaround);

}

