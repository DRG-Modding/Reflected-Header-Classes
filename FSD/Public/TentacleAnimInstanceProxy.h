#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "TentacleAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FTentacleAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FSD_API FTentacleAnimInstanceProxy();
};

