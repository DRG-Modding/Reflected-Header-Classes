#pragma once
#include "CoreMinimal.h"
#include "CSGWarped.h"
#include "SplineWarpProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineCurves -FallbackName=SplineCurves
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "CSGSplineWarp.generated.h"

UCLASS(Blueprintable)
class UCSGSplineWarp : public UCSGWarped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineWarpProperties SplineProperties;
    
    UPROPERTY(EditAnywhere)
    FSplineCurves SplineCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBox> AABBs;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector4> planes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox TotalAABB;
    
    UCSGSplineWarp();
};

