#pragma once
#include "CoreMinimal.h"
#include "ELandscapeCustomizedCoordType.h"
#include "ETerrainCoordMappingType.h"
//CROSS-MODULE INCLUDE: Engine MaterialExpression
#include "MaterialExpressionLandscapeLayerCoords.generated.h"

UCLASS(CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETerrainCoordMappingType> MappingType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ELandscapeCustomizedCoordType> CustomUVType;
    
    UPROPERTY(EditAnywhere)
    float MappingScale;
    
    UPROPERTY(EditAnywhere)
    float MappingRotation;
    
    UPROPERTY(EditAnywhere)
    float MappingPanU;
    
    UPROPERTY(EditAnywhere)
    float MappingPanV;
    
    UMaterialExpressionLandscapeLayerCoords();
};

