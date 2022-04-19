#pragma once
#include "CoreMinimal.h"
#include "ARTraceResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EARLineTraceChannels.h"
#include "ARTraceResultLibrary.generated.h"

class UARTrackedGeometry;

UCLASS(BlueprintType)
class AUGMENTEDREALITY_API UARTraceResultLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UARTraceResultLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UARTrackedGeometry* GetTrackedGeometry(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EARLineTraceChannels GetTraceChannel(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetLocalTransform(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetLocalToWorldTransform(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetLocalToTrackingTransform(const FARTraceResult& TraceResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDistanceFromCamera(const FARTraceResult& TraceResult);
    
};

