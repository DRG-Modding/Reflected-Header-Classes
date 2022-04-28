#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AttackEffect.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UAttackEffect : public UObject {
    GENERATED_BODY()
public:
    UAttackEffect();
};

