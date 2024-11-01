// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AthenaProjectile.generated.h"

// Forward declerations
class URadialForceComponent;
class UProjectileMovementComponent;

UCLASS()
class LYRAGAME_API AAthenaProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAthenaProjectile();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="Mesh")
	UStaticMeshComponent* mMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="RadialForce")
	URadialForceComponent* mRadialForceComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="ProjectileMovement")
	UProjectileMovementComponent* mProjectileMovComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Athena", DisplayName="DetonationRadius")
	float mRadius = 400.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Athena", DisplayName="SelfDamageMod")
	float mSelfDamageMod = 0.5f;
	
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	bool QueryImpact(); // Sweep shape and detect overlaps with characters

	UFUNCTION(BlueprintCallable)
	void ProcessImpacts(TSubclassOf<UGameplayEffect> gameplayEffect); // Actual processing of impact and applying GameplayEffect happens here
	
	UFUNCTION(BlueprintCallable)
	TArray<FHitResult>& GetHitResults() {return mImpactResults;}

	UFUNCTION(BlueprintCallable)
	float GetDamageScale(FVector pos1, FVector pos2, bool bIsSelf);
	
	UFUNCTION(BlueprintImplementableEvent)
	void Detonate(); // Blueprints responds to impact to handle FX etc in Blueprints

private:	
	TArray<FHitResult> mImpactResults;
	
	UFUNCTION()
	void HandleHitEvent(AActor* self, AActor* other, FVector normal, const FHitResult& hit);
};
