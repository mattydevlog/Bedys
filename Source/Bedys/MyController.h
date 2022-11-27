// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePawn.h"
#include "MyController.generated.h"

/**
 * 
 */
UCLASS()
class BEDYS_API AMyController : public APlayerController
{
	GENERATED_BODY()
	
private:
	void SetupInputComponent();
};
