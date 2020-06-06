// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthPickup.h"
#include "MainCharacter.h"
#include "DrawDebugHelpers.h"

AHealthPickup::AHealthPickup()
{
	HealingAmount = 20.f;
}

void AHealthPickup::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("AHealthPickup::OnOverlapBegin"));

	AMainCharacter* MainCharacter = Cast<AMainCharacter>(OtherActor);
	if (MainCharacter)
	{
		MainCharacter->SetHealth(MainCharacter->GetHealth() + HealingAmount);
	}

	if (HealingAmount >= 0.f)
	{
		DrawDebugCircle(GetWorld(), GetActorLocation(), 25, 50, FColor::Red, false, 5.f, 0, 1.f);
	}
	else
	{
		DrawDebugSphere(GetWorld(), GetActorLocation(), 25.f, 12, FColor::Red, false, 5.f, 0, 2.f);
	}

	

	Super::OnOverlapBegin(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}