#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "SpiderAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FSpiderAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FSD_API FSpiderAnimInstanceProxy();
};

