#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstanceProxy
#include "TentacleAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FTentacleAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FSD_API FTentacleAnimInstanceProxy();
};

