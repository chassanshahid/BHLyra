// Fill out your copyright notice in the Description page of Project Settings.


#include "LyraGameplayAbility_SlowFall.h"

#include "Character/LyraCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

bool ULyraGameplayAbility_SlowFall::StartSlowFall()
{
	if(!HasAuthority(&CurrentActivationInfo)) {return false;} // Exit if no authority
	
	mMovementComponent = GetLyraCharacterFromActorInfo()->GetCharacterMovement();
	if (mMovementComponent && mMovementComponent->IsFalling() && mMovementComponent->Velocity.Z < -mVelThreshold)
	{
		mOriginalGravityScale = mMovementComponent->GravityScale;
		mMovementComponent->GravityScale = mGravityMod;
		return true;
	}
	else
	{
		return false;
	}
}

void ULyraGameplayAbility_SlowFall::EndSlowFall()
{
	if (HasAuthority(&CurrentActivationInfo) && mMovementComponent)
	{
		mMovementComponent->GravityScale = mOriginalGravityScale;
	}
}
