#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine MaterialExpression
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MaterialExpressionLandscapeLayerSample.generated.h"

UCLASS(CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeLayerSample : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    float PreviewWeight;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    UMaterialExpressionLandscapeLayerSample();
};

