// Fill out your copyright notice in the Description page of Project Settings.


#include "DuckPlayerCode.h"

// Sets default values
ADuckPlayerCode::ADuckPlayerCode()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bUseControllerRotationPitch = true;
	bUseControllerRotationYaw = true;
}

// Called when the game starts or when spawned
void ADuckPlayerCode::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADuckPlayerCode::MoveForwardBack(float Axis)
{
	AddMovementInput(GetActorForwardVector(), Axis);
}

void ADuckPlayerCode::MoveRightLeft(float Axis)
{
	AddMovementInput(GetActorRightVector(), Axis);
}

void ADuckPlayerCode::LookUpDown(float Axis)
{
	AddControllerPitchInput(-Axis);
}

void ADuckPlayerCode::LookRigthLeft(float Axis)
{
	AddControllerYawInput(Axis);
}

// Called every frame
void ADuckPlayerCode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADuckPlayerCode::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("WalkFB", this, &ADuckPlayerCode::MoveForwardBack);
	PlayerInputComponent->BindAxis("WalkRL", this, &ADuckPlayerCode::MoveRightLeft);
	PlayerInputComponent->BindAxis("LookRL", this, &ADuckPlayerCode::LookRigthLeft);
}

