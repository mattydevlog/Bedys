// Fill out your copyright notice in the Description page of Project Settings.


#include "MyController.h"

void AMyController::BeginPlay()
{ 
	DefaultPawn = GetPawn();
	
	if(DefaultPawn)
	Possess(DefaultPawn);
	
}


void AMyController::SetupInputComponent() 
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &AMyController::MoveForward);
	InputComponent->BindAxis("MoveHorizontal", this, &AMyController::MoveHorizontal);
	InputComponent->BindAction("Jump",IE_Pressed, this, &AMyController::Jump);
	
}

void AMyController::MoveForward(float MoveAxis)
{
	
	if(DefaultPawn)
	{
		DefaultPawn->AddMovementInput(DefaultPawn->GetActorForwardVector(), 1.0f);
	}
	
}

void AMyController::MoveHorizontal(float MoveAxis)
{
	
}
void AMyController::Jump()
{

}

