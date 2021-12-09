#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Box
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "LandscapeSplineSegmentConnection.h"
//CROSS-MODULE INCLUDE: CoreUObject InterpCurveVector
#include "LandscapeSplineInterpPoint.h"
#include "LandscapeSplineSegment.generated.h"

class USplineMeshComponent;

UCLASS(MinimalAPI, Within=LandscapeSplinesComponent)
class ULandscapeSplineSegment : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    FLandscapeSplineSegmentConnection Connections[2];
    
protected:
    UPROPERTY()
    FInterpCurveVector SplineInfo;
    
    UPROPERTY()
    TArray<FLandscapeSplineInterpPoint> Points;
    
    UPROPERTY()
    FBox Bounds;
    
    UPROPERTY(Export, TextExportTransient)
    TArray<USplineMeshComponent*> LocalMeshComponents;
    
public:
    ULandscapeSplineSegment();
};

