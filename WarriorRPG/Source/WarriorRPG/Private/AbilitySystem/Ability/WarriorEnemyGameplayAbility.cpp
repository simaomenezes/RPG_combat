// Simão Neto All Rights Reserved


#include "AbilitySystem/Ability/WarriorEnemyGameplayAbility.h"
#include "Characters/WarriorEnemyCharacter.h"

AWarriorEnemyCharacter* UWarriorEnemyGameplayAbility::GetEnemyCharacterFromActorInfo()
{
	if (!CacheWarriorEnemyCharacter.IsValid())
	{
		CacheWarriorEnemyCharacter = Cast<AWarriorEnemyCharacter>(CurrentActorInfo->AvatarActor);
	}

	return CacheWarriorEnemyCharacter.IsValid() ? CacheWarriorEnemyCharacter.Get() : nullptr;
}

UEnemyCombatComponent* UWarriorEnemyGameplayAbility::GetEnemyCombatComponentFromActorInfo()
{
	return GetEnemyCharacterFromActorInfo()->GetEnemyCombatComponent();
}
