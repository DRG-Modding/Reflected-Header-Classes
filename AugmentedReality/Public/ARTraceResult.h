#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EARLineTraceChannels.h"
#include "ARTraceResult.generated.h"

class UARTrackedGeometry;

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARTraceResult {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float DistanceFromCamera;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EARLineTraceChannels TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTransform LocalTransform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UARTrackedGeometry* TrackedGeometry;
    
public:
    FARTraceResult();
};

