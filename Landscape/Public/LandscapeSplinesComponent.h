#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "LandscapeSplinesComponent.generated.h"

class UMeshComponent;
class ULandscapeSplineControlPoint;
class ULandscapeSplineSegment;
class USplineMeshComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULandscapeSplinesComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeSplineControlPoint*> ControlPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeSplineSegment*> Segments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> CookedForeignMeshComponents;
    
public:
    ULandscapeSplinesComponent();
    UFUNCTION(BlueprintCallable)
    TArray<USplineMeshComponent*> GetSplineMeshComponents();
    
};

