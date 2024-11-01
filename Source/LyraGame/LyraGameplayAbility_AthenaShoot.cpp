// Fill out your copyright notice in the Description page of Project Settings.


#include "LyraGameplayAbility_AthenaShoot.h"
#include "Character/LyraCharacter.h"

void ULyraGameplayAbility_AthenaShoot::StartWeaponTargeting()
{
	// Spawn on player character + offset
	FVector forwardOffset = GetLyraCharacterFromActorInfo()->GetActorForwardVector() * mSpawnOffest.X;
	FVector sideOffset = GetLyraCharacterFromActorInfo()->GetActorRightVector() * mSpawnOffest.Y;
	FVector verticalOffset = GetLyraCharacterFromActorInfo()->GetActorUpVector() * mSpawnOffest.Z;
	mProjectileSpawnLocation = GetLyraCharacterFromActorInfo()->GetActorLocation() + forwardOffset + sideOffset + verticalOffset; 

	// Aim towards player view/reticle
	mProjectileSpawnTrajectory = GetLyraCharacterFromActorInfo()->GetControlRotation();

	// Allow blueprints to play animations and effects etc.
	// Blueprints is also responsible for Calling FireWeapon() to actually spawn the projectile
	// Spawning handled in c++
	OnTargetingReady(); 
}

void ULyraGameplayAbility_AthenaShoot::FireWeapon()
{
	// Only spawn projectile if projectile set in editor and server authority
	if (mProjectile && HasAuthority(&CurrentActivationInfo))
	{
		FActorSpawnParameters spawnParameters;
		spawnParameters.Instigator = GetLyraCharacterFromActorInfo();
		
		GetWorld()->SpawnActor<AActor>
		(
			mProjectile,
			mProjectileSpawnLocation,
			mProjectileSpawnTrajectory,
			spawnParameters
		);
	}
}
