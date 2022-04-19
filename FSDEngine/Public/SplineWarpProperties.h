#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "ESplineWarpType.h"
#include "SplineWarpProperties.generated.h"

USTRUCT(BlueprintType)
struct FSplineWarpProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox ElementBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineWarpType SplineWarpType;
    
    FSDENGINE_API FSplineWarpProperties();
};

