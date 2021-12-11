#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
#include "LandscapeSplinesComponent.generated.h"

class ULandscapeSplineControlPoint;
class ULandscapeSplineSegment;
class UMeshComponent;
class USplineMeshComponent;

UCLASS(MinimalAPI)
class ULandscapeSplinesComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(TextExportTransient)
    TArray<ULandscapeSplineControlPoint*> ControlPoints;
    
    UPROPERTY(TextExportTransient)
    TArray<ULandscapeSplineSegment*> Segments;
    
    UPROPERTY(Export, TextExportTransient)
    TArray<UMeshComponent*> CookedForeignMeshComponents;
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<USplineMeshComponent*> GetSplineMeshComponents();
    
    ULandscapeSplinesComponent();
};

