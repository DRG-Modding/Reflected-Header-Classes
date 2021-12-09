#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EyeTrackerStereoGazeData.generated.h"

USTRUCT(BlueprintType)
struct FEyeTrackerStereoGazeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LeftEyeOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LeftEyeDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RightEyeOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RightEyeDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FixationPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConfidenceValue;
    
    EYETRACKER_API FEyeTrackerStereoGazeData();
};

