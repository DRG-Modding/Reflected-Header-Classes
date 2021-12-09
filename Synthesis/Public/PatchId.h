#pragma once
#include "CoreMinimal.h"
#include "PatchId.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FPatchId {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ID;
    
    FPatchId();
};

