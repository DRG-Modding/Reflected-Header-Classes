#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpression -FallbackName=MaterialExpression
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ExpressionInput -FallbackName=ExpressionInput
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionLandscapeLayerSwitch.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput LayerUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput LayerNotUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PreviewUsed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ExpressionGUID;
    
    UMaterialExpressionLandscapeLayerSwitch();
};

