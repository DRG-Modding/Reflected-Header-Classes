#pragma once
#include "CoreMinimal.h"
#include "LandscapeSplineInterpPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LandscapeSplineSegmentConnection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector -FallbackName=InterpCurveVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "LandscapeSplineSegment.generated.h"

class USplineMeshComponent;

UCLASS(Blueprintable, MinimalAPI, Within=LandscapeSplinesComponent)
class ULandscapeSplineSegment : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    FLandscapeSplineSegmentConnection Connections[2];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveVector SplineInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLandscapeSplineInterpPoint> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> LocalMeshComponents;
    
public:
    ULandscapeSplineSegment();
};

