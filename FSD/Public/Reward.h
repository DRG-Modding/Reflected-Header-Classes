#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "Reward.generated.h"

UCLASS(Abstract, EditInlineNew)
class UReward : public UDataAsset {
    GENERATED_BODY()
public:
    UReward();
};

