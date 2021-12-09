#pragma once
#include "CoreMinimal.h"
#include "LandscapeSplineSegmentConnection.generated.h"

class ULandscapeSplineControlPoint;

USTRUCT(BlueprintType)
struct FLandscapeSplineSegmentConnection {
    GENERATED_BODY()
public:
    UPROPERTY()
    ULandscapeSplineControlPoint* ControlPoint;
    
    UPROPERTY(EditAnywhere)
    float TangentLen;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    LANDSCAPE_API FLandscapeSplineSegmentConnection();
};

