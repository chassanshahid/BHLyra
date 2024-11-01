// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/LyraGameplayAbility.h"
#include "LyraGameplayAbility_SlowFall.generated.h"

class UCharacterMovementComponent;
/**
 * 
 */
UCLASS()
class LYRAGAME_API ULyraGameplayAbility_SlowFall : public ULyraGameplayAbility
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slow Fall", DisplayName = "SlowFall Gravity Scale")
	float mGravityMod = 0.45f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slow Fall", DisplayName = "SlowFall Velocity Threshold")
	float mVelThreshold = 5.f;

	UFUNCTION(BlueprintCallable, Category = "Slow Fall")
	bool StartSlowFall();
	UFUNCTION(BlueprintCallable, Category = "Slow Fall")
	void EndSlowFall();

private:
	float mOriginalGravityScale = 1.0f;
	
	UPROPERTY()
	UCharacterMovementComponent* mMovementComponent = nullptr;
	
};
