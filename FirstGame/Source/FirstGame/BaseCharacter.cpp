// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"
#include "Components/BoxComponent.h"
#include "Animation/AnimInstance.h"
#include "Components/CapsuleComponent.h"
#include "MainCharacter.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the sword collision box
	SwordCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("SwordCollisionBox"));
	SwordCollisionBox->SetupAttachment(GetMesh(), FName("WeaponLSocket"));

	SwordCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SwordCollisionBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	SwordCollisionBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	SwordCollisionBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ABaseCharacter::ActivateCollision()
{
	SwordCollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}


void ABaseCharacter::DeactivateCollision()
{
	SwordCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ABaseCharacter::SwordBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{

}

float ABaseCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser)
{
	UE_LOG(LogTemp, Warning, TEXT("TakeDamage"));
	if (Health - DamageAmount <= 0.f)
	{
		Health = 0.f;
		Die(DamageCauser);
	}
	else
	{
		Health -= DamageAmount;
	}

	return DamageAmount;
}

void ABaseCharacter::Die(AActor* Causer)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && CountessAttackMontage)
	{
		AnimInstance->Montage_Play(CountessAttackMontage, 1.0f);
		AnimInstance->Montage_JumpToSection(FName("Death"), CountessAttackMontage);
	}

	SwordCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	bAttacking = false;
}

void ABaseCharacter::DeathEnd()
{

}

void ABaseCharacter::SetIsAttacking(bool Attacking)
{
	bAttacking = Attacking;
}