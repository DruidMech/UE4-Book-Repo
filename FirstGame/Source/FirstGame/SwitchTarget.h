// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SwitchInterface.h"
#include "GameFramework/Actor.h"
#include "SwitchTarget.generated.h"


UCLASS()
class FIRSTGAME_API ASwitchTarget : public AActor, public ISwitchInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwitchTarget();

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* TargetMesh;

	FVector InitialLocation;
	FRotator InitialRotation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Activate_Implementation() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Switch Target")
	void ActivateSwitchTarget();

	UFUNCTION(BlueprintCallable, Category = "Floor Switch")
	void UpdateSwitchLocation(float Location, float Rotation);

};
