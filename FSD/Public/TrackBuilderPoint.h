#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
#include "ETrackBuildPlacementState.h"
#include "TrackBuilderPoint.generated.h"

class UTrackBuilderConnectPoint;

USTRUCT(BlueprintType)
struct FTrackBuilderPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    ETrackBuildPlacementState PlacementState;
    
    UPROPERTY()
    FVector_NetQuantize Location;
    
    UPROPERTY()
    FVector_NetQuantize EulerRotation;
    
    UPROPERTY()
    bool bPointValid;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UTrackBuilderConnectPoint> ConnectPoint;
    
    FSD_API FTrackBuilderPoint();
};

