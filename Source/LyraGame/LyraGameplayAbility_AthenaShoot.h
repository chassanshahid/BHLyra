// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Equipment/LyraGameplayAbility_FromEquipment.h"
#include "LyraGameplayAbility_AthenaShoot.generated.h"

/**
 * 
 */
UCLASS()
class LYRAGAME_API ULyraGameplayAbility_AthenaShoot : public ULyraGameplayAbility_FromEquipment
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Athena")
	FVector GetSpawnLocation() {return mProjectileSpawnLocation;}

	UFUNCTION(BlueprintCallable, Category = "Athena")
	FRotator GetSpawnTrajectory() {return mProjectileSpawnTrajectory;}
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Athena", DisplayName="ProjectileSpawnOffset")
	FVector mSpawnOffest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Athena", DisplayName="Projectile")
	TSubclassOf<AActor> mProjectile;
	
	UFUNCTION(BlueprintCallable, Category="Athena")
	void StartWeaponTargeting();

	UFUNCTION(BlueprintCallable, Category="Athena")
	void FireWeapon();
	
	UFUNCTION(BlueprintImplementableEvent, Category="Athena")
	void OnTargetingReady();
private:
	FVector mProjectileSpawnLocation;
	FRotator mProjectileSpawnTrajectory;
};
