// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "MyController.generated.h"

/**
 * 
 */
UCLASS()
class BEDYS_API AMyController : public APlayerController
{
	GENERATED_BODY()
public:
	void SetupInputComponent() override;
	void MoveForward(float MoveAxis);
	void Jump();
	void MoveHorizontal(float MoveAxis);
	
private:
	APawn* MyPawn;

	UPROPERTY()
		APawn* DefaultPawn;
	float moveSpeed = 10;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
