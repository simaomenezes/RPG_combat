// Simão Neto All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "Items/Weapons/WarriorWeaponBase.h"
#include "WarriorTypes/WarriorStructTypes.h"
#include "WarriorHeroWeapon.generated.h"

/**
 * 
 */
UCLASS()
class WARRIORRPG_API AWarriorHeroWeapon : public AWarriorWeaponBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category= "WeaponData")
	FWarriorHeroWeaponData HeroWeaponData;

	UFUNCTION(BlueprintCallable)
	void AssignGrantAbilitySpecHandle(const TArray<FGameplayAbilitySpecHandle>& InSpecHandle);

	UFUNCTION(BlueprintCallable)
	TArray<FGameplayAbilitySpecHandle> GetGrantedAbilitySpecHandles() const;

private:
	TArray<FGameplayAbilitySpecHandle> GrantedAbilitySpecHandles;
};
