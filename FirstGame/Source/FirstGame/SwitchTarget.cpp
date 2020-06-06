// Fill out your copyright notice in the Description page of Project Settings.


#include "SwitchTarget.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ASwitchTarget::ASwitchTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TargetMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TargetMesh"));
	RootComponent = Cast<USceneComponent>(TargetMesh);
}

// Called when the game starts or when spawned
void ASwitchTarget::BeginPlay()
{
	Super::BeginPlay();
	
	InitialLocation = GetActorLocation();
	InitialRotation = GetActorRotation();
}

// Called every frame
void ASwitchTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASwitchTarget::Activate_Implementation()
{
	ActivateSwitchTarget();
}

void ASwitchTarget::UpdateSwitchLocation(float Location, float Rotation)
{
	FVector NewLocation = InitialLocation;
	NewLocation.Z += Location;
	TargetMesh->SetWorldLocation(NewLocation);

	FRotator NewRotation = InitialRotation;
	NewRotation.Yaw += Rotation;
	TargetMesh->SetWorldRotation(NewRotation);
}
