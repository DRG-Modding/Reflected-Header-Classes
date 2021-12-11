#pragma once
#include "CoreMinimal.h"
#include "LayerBlendInput.h"
//CROSS-MODULE INCLUDE: Engine MaterialExpression
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MaterialExpressionLandscapeLayerBlend.generated.h"

UCLASS(CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FLayerBlendInput> Layers;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    UMaterialExpressionLandscapeLayerBlend();
};

