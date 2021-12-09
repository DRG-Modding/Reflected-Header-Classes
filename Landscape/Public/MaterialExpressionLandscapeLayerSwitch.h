#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine MaterialExpression
//CROSS-MODULE INCLUDE: Engine ExpressionInput
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MaterialExpressionLandscapeLayerSwitch.generated.h"

UCLASS(CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput LayerUsed;
    
    UPROPERTY()
    FExpressionInput LayerNotUsed;
    
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    uint8 PreviewUsed: 1;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    UMaterialExpressionLandscapeLayerSwitch();
};

