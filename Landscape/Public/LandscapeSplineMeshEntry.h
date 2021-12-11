#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: Engine ESplineMeshAxis
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "LandscapeSplineMeshOrientation.h"
#include "LandscapeSplineMeshEntry.generated.h"

class UStaticMesh;
class UMaterialInterface;

USTRUCT()
struct FLandscapeSplineMeshEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<UMaterialInterface*> MaterialOverrides;
    
    UPROPERTY(EditAnywhere)
    uint8 bCenterH: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector2D CenterAdjust;
    
    UPROPERTY(EditAnywhere)
    uint8 bScaleToWidth: 1;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY()
    TEnumAsByte<LandscapeSplineMeshOrientation> Orientation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESplineMeshAxis::Type> UpAxis;
    
    LANDSCAPE_API FLandscapeSplineMeshEntry();
};

