#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine MaterialExpression
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MaterialExpressionLandscapeVisibilityMask.generated.h"

UCLASS(CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ExpressionGUID;
    
    UMaterialExpressionLandscapeVisibilityMask();
};

