// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingActor.h"
#include "Kismet/GameplayStatics.h"
#include "MainCharacter.h"

// Sets default values
ARotatingActor::ARotatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Cast<USceneComponent>(Mesh);

	bRotate = false;
	RotationRate = 45.f;
}

// Called when the game starts or when spawned
void ARotatingActor::BeginPlay()
{
	Super::BeginPlay();

	APawn* Pawn = UGameplayStatics::GetPlayerPawn(this, 0);
	AMainCharacter* MainCharacter = Cast<AMainCharacter>(Pawn);
	if (MainCharacter)
	{
		MainCharacter->RotateDelegate.BindUObject(this, &ARotatingActor::ToggleRotate);
		MainCharacter->DynamicRotateDelegate.BindDynamic(this, &ARotatingActor::SetRotationRate);
	}
}

// Called every frame
void ARotatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bRotate)
	{
		FRotator Rotation = GetActorRotation();
		Rotation.Yaw += DeltaTime * RotationRate;
		SetActorRotation(Rotation);
	}
}

void ARotatingActor::ToggleRotate()
{
	bRotate = !bRotate;
}

float ARotatingActor::SetRotationRate(float Rate)
{
	float Temp = RotationRate;
	RotationRate = Rate;
	return Temp;
}
