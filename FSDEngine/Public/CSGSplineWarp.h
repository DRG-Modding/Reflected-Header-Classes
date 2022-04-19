#pragma once
#include "CoreMinimal.h"
#include "CSGWarped.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "SplineWarpProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineCurves -FallbackName=SplineCurves
#include "CSGSplineWarp.generated.h"

UCLASS()
class UCSGSplineWarp : public UCSGWarped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineWarpProperties SplineProperties;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSplineCurves SplineCurves;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FBox> AABBs;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<float> Keys;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVector4> planes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBox TotalAABB;
    
    UCSGSplineWarp();
};

