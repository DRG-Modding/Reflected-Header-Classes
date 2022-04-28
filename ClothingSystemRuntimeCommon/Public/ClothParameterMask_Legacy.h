#pragma once
#include "CoreMinimal.h"
#include "EWeightMapTargetCommon.h"
#include "ClothParameterMask_Legacy.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMECOMMON_API FClothParameterMask_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaskName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeightMapTargetCommon CurrentTarget;
    
    UPROPERTY(EditAnywhere)
    float MaxValue;
    
    UPROPERTY(EditAnywhere)
    float MinValue;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    FClothParameterMask_Legacy();
};

