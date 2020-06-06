// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloorSwitch.generated.h"

UCLASS()
class FIRSTGAME_API AFloorSwitch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloorSwitch();

	/** Box to trigger overlap events */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Floor Switch")
	class UBoxComponent* TriggerBox;

	/** Block for the character to step on */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Floor Switch")
	class UStaticMeshComponent* FloorSwitch;

	/** Door to raise when the floor switch is stepped on */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Floor Switch")
	UStaticMeshComponent* Door;

	/** Initial location for the door */
	UPROPERTY(BlueprintReadWrite, Category = "Floor Switch")
	FVector InitialDoorLocation;

	/** Initial location for the floor switch */
	UPROPERTY(BlueprintReadWrite, Category = "Floor Switch")
	FVector InitialSwitchLocation;

	/** Reference to the Player Controller */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Controller")
	class AMainPlayerController* MainPlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Switch")
	TArray<class ASwitchTarget*> SwitchTargets;

	UFUNCTION(BlueprintCallable)
	void ActivateSwitchTargets();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	/** Called when Box Component is overlapped, used in Blueprints to start the timeline */
	UFUNCTION(BlueprintImplementableEvent, Category = "Floor Switch")
	void ActivateFloorSwitch();

	/** When no longer overlapping, used in Blueprints to reverse the timeline */
	UFUNCTION(BlueprintImplementableEvent, Category = "Floor Switch")
	void DeactivateFloorSwitch();

	/** Called in Blueprints to pass in data from the Timeline */
	UFUNCTION(BlueprintCallable, Category = "Floor Switch")
	void UpdateFloorSwitchLocations(float DoorLocation, float SwitchLocation);

};
