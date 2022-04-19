#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Reward.generated.h"

UCLASS(Abstract, EditInlineNew)
class UReward : public UDataAsset {
    GENERATED_BODY()
public:
    UReward();
};

