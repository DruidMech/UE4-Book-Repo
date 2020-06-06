// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "Enemy.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "FirstGame.h"

AEnemyController::AEnemyController()
{
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
	check(BlackboardComponent);

	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComp"));
	check(BehaviorTreeComponent);
}

void AEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (InPawn == nullptr)
	{
		return;
	}
	AEnemy* Enemy = Cast<AEnemy>(InPawn);
	if (Enemy)
	{
		if (Enemy->BehaviorTree)
		{
			BlackboardComponent->InitializeBlackboard(*(Enemy->BehaviorTree->BlackboardAsset));

			BehaviorTreeComponent->StartTree(*(Enemy->BehaviorTree));
		}
	}
}

UBlackboardComponent* AEnemyController::GetBlackboard()
{
	return BlackboardComponent;
}