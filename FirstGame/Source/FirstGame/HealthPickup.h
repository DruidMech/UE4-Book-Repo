// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "HealthPickup.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTGAME_API AHealthPickup : public AItem
{
	GENERATED_BODY()
public:
	AHealthPickup();

	/** Amount this pickup will heal the player by */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healing")
	float HealingAmount;

	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult) override;
};
