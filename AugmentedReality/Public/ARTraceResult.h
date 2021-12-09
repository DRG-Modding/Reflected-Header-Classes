#pragma once
#include "CoreMinimal.h"
#include "EARLineTraceChannels.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "ARTraceResult.generated.h"

class UARTrackedGeometry;

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARTraceResult {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float DistanceFromCamera;
    
    UPROPERTY()
    EARLineTraceChannels TraceChannel;
    
    UPROPERTY()
    FTransform LocalToTrackingTransform;
    
    UPROPERTY()
    UARTrackedGeometry* TrackedGeometry;
    
public:
    FARTraceResult();
};

