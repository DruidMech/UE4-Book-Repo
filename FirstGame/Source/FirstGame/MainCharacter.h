// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "MainCharacter.generated.h"

DECLARE_DELEGATE(FRotateDelegate);
DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(float, FDynamicRotateDelegate, float, RotationSpeed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynamicMulticastRotateDelegate, bool, bPlaySound);

UCLASS()
class FIRSTGAME_API AMainCharacter : public ABaseCharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:
	// Sets default values for this character's properties
	AMainCharacter();

	FORCEINLINE float GetHealth() { return Health; }
	void SetHealth(float Amount);
	FORCEINLINE float GetMaxHealth() { return MaxHealth; }
	FORCEINLINE void SetMaxHealth(float Amount) { MaxHealth = Amount; }

	FRotateDelegate RotateDelegate;

	UPROPERTY()
	FDynamicRotateDelegate DynamicRotateDelegate;

	UPROPERTY(BlueprintAssignable)
	FDynamicMulticastRotateDelegate DynamicMulticastRotateDelegate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Delegates")
	bool bShouldRotatorsPlaySound;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** Called when the right mouse button is pressed */
	void LMBDown();

	/** Called when the right mouse button is released */
	void LMBUp();

	/** Called when the escape or Q buttons are pressed */
	void ESCDown();

	/** Reference to the Player Controller */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Controller")
	class AMainPlayerController* MainPlayerController;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void SaveGame();

	UFUNCTION(BlueprintCallable)
	void LoadGame();

	UFUNCTION(BlueprintCallable)
	void ToggleAllRotators();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotatingActorRotate;

	UFUNCTION(BlueprintCallable)
	void SetRotatingActorRates(float Rate);

	UFUNCTION(BlueprintCallable)
	void PlaySoundAtRotatingActors(bool PlaySound);

	virtual void SwordBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult) override;

	virtual void DeathEnd() override;

	FORCEINLINE void AddXP(int32 AddedXP) { XP += AddedXP; }
};
