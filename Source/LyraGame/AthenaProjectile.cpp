// Fill out your copyright notice in the Description page of Project Settings.


#include "AthenaProjectile.h"

#include "Character/LyraCharacter.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "AbilitySystem/LyraGameplayEffectContext.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"

// Sets default values
AAthenaProjectile::AAthenaProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = mMeshComponent;
	mRadialForceComponent = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForce"));
	mRadialForceComponent->AttachToComponent(mMeshComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));

	mProjectileMovComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
}

void AAthenaProjectile::BeginPlay()
{
	Super::BeginPlay();
	mRadialForceComponent->Radius = mRadius;

	OnActorHit.AddDynamic(this, &AAthenaProjectile::HandleHitEvent);
}

bool AAthenaProjectile::QueryImpact()
{
	if (!HasAuthority()) {return false;}// Exit if no authority

	// Detect overlapping pawns
	TArray<FHitResult> hitResults;
	bool hasHit = GetWorld()->SweepMultiByChannel
	(
		hitResults,
		GetActorLocation(),
		GetActorLocation(),
		FQuat::Identity,
		ECC_Pawn,
		FCollisionShape::MakeSphere(mRadius));

	if (hitResults.Num() <= 0) { return false; } // Exit if no hits
	
	mImpactResults = hitResults;
	return true;
}

void AAthenaProjectile::ProcessImpacts(TSubclassOf<UGameplayEffect> gameplayEffect)
{
	if (!HasAuthority()) {return;} // Exit if no authority

	ALyraCharacter* character = Cast<ALyraCharacter>(GetInstigator());
	if (!character) {return;} // Exit if no valid lyra character

	ULyraAbilitySystemComponent* sourceASC = character->GetLyraAbilitySystemComponent();
	if (!sourceASC) {return;} // Exit if no valid AbilitySystemComponent on instigator

	FGameplayEffectContextHandle context = sourceASC->MakeEffectContext();
	UGameplayEffect* effect = gameplayEffect->GetDefaultObject<UGameplayEffect>();
	
	for (FHitResult hitResult : mImpactResults)
	{
		if (ALyraCharacter* target = Cast<ALyraCharacter>(hitResult.GetActor())) // Process if valid target 
		{
			if (ULyraAbilitySystemComponent* targetASC = target->GetLyraAbilitySystemComponent()) // Check for valid AbilitySystemComponent
			{
				context.AddHitResult(hitResult, true);
				float scale = GetDamageScale(hitResult.Location, hitResult.GetActor()->GetActorLocation(), GetInstigator() == hitResult.GetActor());
				sourceASC->ApplyGameplayEffectToTarget(effect, targetASC, scale, context);
			}
		}
	}
}

float AAthenaProjectile::GetDamageScale(FVector pos1, FVector pos2, bool bIsSelf)
{
	float scale = FVector::DistSquared(pos1, pos2) / (mRadius * mRadius);// Square radius for squared dist comparison
	if (bIsSelf)
	{
		// Limit damage if self damage
		scale /= mSelfDamageMod;
	}
	return FMath::Clamp(scale, 0.05f, 1.0f);
}

void AAthenaProjectile::HandleHitEvent(AActor* self, AActor* other, FVector normal, const FHitResult& hit)
{
	if (other == GetInstigator() || other == self) {return;} // Ignore self collisions

	Detonate(); // Call Detonate (on in blueprints) to handle detonation sequence
}
