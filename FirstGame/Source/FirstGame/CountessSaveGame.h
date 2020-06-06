// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "CountessSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTGAME_API UCountessSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	UCountessSaveGame();

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FString PlayerName;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	uint32 UserSlot;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	float Health;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	float MaxHealth;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FVector WorldLocation;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FRotator WorldRotation;
};
