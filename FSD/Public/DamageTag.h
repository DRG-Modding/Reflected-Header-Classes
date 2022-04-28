#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DamageTag.generated.h"

UCLASS(Blueprintable)
class UDamageTag : public UDataAsset {
    GENERATED_BODY()
public:
    UDamageTag();
};

