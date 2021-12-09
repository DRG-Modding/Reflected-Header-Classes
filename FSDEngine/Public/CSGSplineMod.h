#pragma once
#include "CoreMinimal.h"
#include "CSGRemapped.h"
//CROSS-MODULE INCLUDE: CoreUObject Box
//CROSS-MODULE INCLUDE: Engine SplineCurves
#include "SplineModProperties.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector4
#include "CSGSplineMod.generated.h"

UCLASS()
class UCSGSplineMod : public UCSGRemapped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSplineModProperties SplineProperties;
    
    UPROPERTY()
    FSplineCurves SplineCurves;
    
    UPROPERTY()
    TArray<FBox> AABBs;
    
    UPROPERTY()
    TArray<float> Keys;
    
    UPROPERTY()
    TArray<FVector4> Planes;
    
    UPROPERTY()
    FBox TotalAABB;
    
    UCSGSplineMod();
};

