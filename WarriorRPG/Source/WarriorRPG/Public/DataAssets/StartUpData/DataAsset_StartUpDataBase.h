// Simão Neto All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartUpDataBase.generated.h"

class UWarriorGameplayAbility;
class UWarriorAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class WARRIORRPG_API UDataAsset_StartUpDataBase : public UDataAsset
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);

protected:
	UPROPERTY(EditDefaultsOnly, Category= "StartUpData")
	TArray< TSubclassOf<UWarriorGameplayAbility>> ActivateGivenAbilities;
	UPROPERTY(EditDefaultsOnly, Category= "StartUpData")
	TArray<TSubclassOf<UWarriorGameplayAbility>> ReactiveAbilities;

	void GrantAbilities(TArray< TSubclassOf<UWarriorGameplayAbility>>& InAbilitiesToGive,
		UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);
};
