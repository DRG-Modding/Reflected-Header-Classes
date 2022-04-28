#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "StatusEffectExclusiveKey.generated.h"

UCLASS(Blueprintable)
class UStatusEffectExclusiveKey : public UDataAsset {
    GENERATED_BODY()
public:
    UStatusEffectExclusiveKey();
};

