#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpression -FallbackName=MaterialExpression
#include "ETerrainCoordMappingType.h"
#include "ELandscapeCustomizedCoordType.h"
#include "MaterialExpressionLandscapeLayerCoords.generated.h"

UCLASS(Blueprintable, CollapseCategories)
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

