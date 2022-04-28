#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "LandscapeSplineConnection.h"
#include "LandscapeSplineInterpPoint.h"
#include "LandscapeSplineControlPoint.generated.h"

class UControlPointMeshComponent;

UCLASS(Blueprintable, MinimalAPI, Within=LandscapeSplinesComponent)
class ULandscapeSplineControlPoint : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    float Width;
    
    UPROPERTY(EditAnywhere)
    float LayerWidthRatio;
    
    UPROPERTY(EditAnywhere)
    float SideFalloff;
    
    UPROPERTY(EditAnywhere)
    float LeftSideFalloffFactor;
    
    UPROPERTY(EditAnywhere)
    float RightSideFalloffFactor;
    
    UPROPERTY(EditAnywhere)
    float LeftSideLayerFalloffFactor;
    
    UPROPERTY(EditAnywhere)
    float RightSideLayerFalloffFactor;
    
    UPROPERTY(EditAnywhere)
    float EndFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<FLandscapeSplineConnection> ConnectedSegments;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLandscapeSplineInterpPoint> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, TextExportTransient, meta=(AllowPrivateAccess=true))
    UControlPointMeshComponent* LocalMeshComponent;
    
public:
    ULandscapeSplineControlPoint();
};

