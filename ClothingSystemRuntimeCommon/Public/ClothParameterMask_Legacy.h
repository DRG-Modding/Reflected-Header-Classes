#pragma once
#include "CoreMinimal.h"
#include "EWeightMapTargetCommon.h"
#include "ClothParameterMask_Legacy.generated.h"

USTRUCT()
struct CLOTHINGSYSTEMRUNTIMECOMMON_API FClothParameterMask_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName MaskName;
    
    UPROPERTY()
    EWeightMapTargetCommon CurrentTarget;
    
    UPROPERTY()
    float MaxValue;
    
    UPROPERTY()
    float MinValue;
    
    UPROPERTY()
    TArray<float> Values;
    
    UPROPERTY()
    bool bEnabled;
    
    FClothParameterMask_Legacy();
};

