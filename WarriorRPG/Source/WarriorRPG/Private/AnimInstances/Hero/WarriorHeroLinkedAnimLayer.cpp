// Simão Neto All Rights Reserved


#include "AnimInstances/Hero/WarriorHeroLinkedAnimLayer.h"

#include "AnimInstances/Hero/WarriorHeroAnimInstance.h"

UWarriorHeroAnimInstance* UWarriorHeroLinkedAnimLayer::GetHeroAnimInstance() const
{
	//return Cast<UWarriorHeroAnimInstance>(GetOwningComponent()->GetAnimInstance());

	UWarriorHeroAnimInstance*  heroAnimInstance = Cast<UWarriorHeroAnimInstance>(GetOwningComponent()->GetAnimInstance());
	return heroAnimInstance;
}
