#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EyeTrackerGazeData.h"
#include "EyeTrackerStereoGazeData.h"
#include "EyeTrackerFunctionLibrary.generated.h"

class APlayerController;

UCLASS(BlueprintType)
class EYETRACKER_API UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void SetEyeTrackedPlayer(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure)
    static bool IsStereoGazeDataAvailable();
    
    UFUNCTION(BlueprintPure)
    static bool IsEyeTrackerConnected();
    
    UFUNCTION(BlueprintCallable)
    static bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGazeData(FEyeTrackerGazeData& OutGazeData);
    
    UEyeTrackerFunctionLibrary();
};

