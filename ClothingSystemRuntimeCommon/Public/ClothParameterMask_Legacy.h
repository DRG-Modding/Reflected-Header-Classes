#pragma once
#include "CoreMinimal.h"
#include "EWeightMapTargetCommon.h"
#include "ClothParameterMask_Legacy.generated.h"

USTRUCT()
struct CLOTHINGSYSTEMRUNTIMECOMMON_API FClothParameterMask_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName MaskName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EWeightMapTargetCommon CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<float> Values;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    FClothParameterMask_Legacy();
};

