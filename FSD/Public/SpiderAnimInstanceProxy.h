#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstanceProxy
#include "SpiderAnimInstanceProxy.generated.h"

USTRUCT()
struct FSpiderAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FSD_API FSpiderAnimInstanceProxy();
};

