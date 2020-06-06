// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyController.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTGAME_API AEnemyController : public AAIController
{
	GENERATED_BODY()
public:
	AEnemyController();

	virtual void OnPossess(APawn* InPawn) override;

	UBlackboardComponent* GetBlackboard();
protected:
	UPROPERTY(BlueprintReadWrite, Category = Behavior)
	class UBlackboardComponent* BlackboardComponent;

	UPROPERTY(BlueprintReadWrite, Category = Behavior)
	class UBehaviorTreeComponent* BehaviorTreeComponent;

};
