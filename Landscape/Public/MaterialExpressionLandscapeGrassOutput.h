#pragma once
#include "CoreMinimal.h"
#include "GrassInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpressionCustomOutput -FallbackName=MaterialExpressionCustomOutput
#include "MaterialExpressionLandscapeGrassOutput.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrassInput> GrassTypes;
    
    UMaterialExpressionLandscapeGrassOutput();
};

