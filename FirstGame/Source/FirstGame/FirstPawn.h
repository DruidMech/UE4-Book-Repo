// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "FirstPawn.generated.h"

UCLASS()
class FIRSTGAME_API AFirstPawn : public APawn
{
	GENERATED_BODY()

	/** Mesh component to give the Pawn a visual representation in the world */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* MeshComponent;

	/** Camera boom positioning the camera behind the Pawn */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	// Sets default values for this pawn's properties
	AFirstPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when the E Key is pressed
	void E_KeyPressed();

	// Called when the E Key is released
	void E_KeyReleased();

	// Called each frame, with Value being 0.0 when SHIFT is up, and 1.0 when SHIFT is down
	void ShiftKey(float Value);

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** Speed to scale movement by */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float Speed;

	/** To store the X and Y components of the Pawn's direction */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	FVector2D Direction;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};
