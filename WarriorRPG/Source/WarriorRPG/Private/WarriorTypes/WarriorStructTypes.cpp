// Simão Neto All Rights Reserved


#include "WarriorTypes/WarriorStructTypes.h"

#include "AbilitySystem/Ability/WarriorGameplayAbility.h"

bool FWarriorHeroAbilitySet::IsValid() const
{
	return InputTag.IsValid() && AbilityToGrant;
}
