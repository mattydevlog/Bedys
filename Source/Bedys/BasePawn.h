// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyController.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/CapsuleComponent.h"



#include "GameFramework/SpringArmComponent.h"

#include "BasePawn.generated.h"

UCLASS()
class BEDYS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();


private:
	
	
	UPROPERTY(EditDefaultsOnly)
	class UCapsuleComponent* CapsuleComponent;
	
	UPROPERTY(EditDefaultsOnly)
		UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditDefaultsOnly)
		class USpringArmComponent* SpringArmComponent;

	UPROPERTY(EditDefaultsOnly)
		UCameraComponent* CameraComponent;
	
	void HandleAttachments();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
