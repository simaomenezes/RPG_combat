// Simão Neto All Rights Reserved


#include "Items/Weapons/WarriorHeroWeapon.h"

void AWarriorHeroWeapon::AssignGrantAbilitySpecHandle(const TArray<FGameplayAbilitySpecHandle>& InSpecHandle)
{
	GrantedAbilitySpecHandles = InSpecHandle;
}

TArray<FGameplayAbilitySpecHandle> AWarriorHeroWeapon::GetGrantedAbilitySpecHandles() const
{
	return GrantedAbilitySpecHandles;
}
