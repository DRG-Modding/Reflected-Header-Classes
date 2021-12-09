#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "ARTraceResult.h"
#include "EARLineTraceChannels.h"
#include "ARTraceResultLibrary.generated.h"

class UARTrackedGeometry;

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARTraceResultLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static UARTrackedGeometry* GetTrackedGeometry(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintPure)
    static EARLineTraceChannels GetTraceChannel(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetLocalToWorldTransform(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetLocalToTrackingTransform(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintPure)
    static float GetDistanceFromCamera(const FARTraceResult& TraceResult);
    
    UARTraceResultLibrary();
};

