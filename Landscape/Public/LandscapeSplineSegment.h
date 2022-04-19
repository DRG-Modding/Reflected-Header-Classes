#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "LandscapeSplineSegmentConnection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector -FallbackName=InterpCurveVector
#include "LandscapeSplineInterpPoint.h"
#include "LandscapeSplineSegment.generated.h"

class USplineMeshComponent;

UCLASS(MinimalAPI, Within=LandscapeSplinesComponent)
class ULandscapeSplineSegment : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FLandscapeSplineSegmentConnection Connections[2];
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInterpCurveVector SplineInfo;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FLandscapeSplineInterpPoint> Points;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(BlueprintReadWrite, Export, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> LocalMeshComponents;
    
public:
    ULandscapeSplineSegment();
};

