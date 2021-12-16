// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"

#include "GameFramework/Character.h"
#include "DuckPlayerCode.generated.h"

UCLASS()
class TT_HEROCRAFT_API ADuckPlayerCode : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADuckPlayerCode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int test;


	void MoveForwardBack(float Axis);
	void MoveRightLeft(float Axis);
	void LookUpDown(float Axis);
	void LookRigthLeft(float Axis);




public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
