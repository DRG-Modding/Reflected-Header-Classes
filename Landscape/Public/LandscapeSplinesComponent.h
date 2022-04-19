#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "LandscapeSplinesComponent.generated.h"

class ULandscapeSplineControlPoint;
class ULandscapeSplineSegment;
class UMeshComponent;
class USplineMeshComponent;

UCLASS(MinimalAPI, meta=(BlueprintSpawnableComponent))
class ULandscapeSplinesComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeSplineControlPoint*> ControlPoints;
    
    UPROPERTY(BlueprintReadWrite, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeSplineSegment*> Segments;
    
    UPROPERTY(BlueprintReadWrite, Export, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> CookedForeignMeshComponents;
    
public:
    ULandscapeSplinesComponent();
    UFUNCTION(BlueprintCallable)
    TArray<USplineMeshComponent*> GetSplineMeshComponents();
    
};

