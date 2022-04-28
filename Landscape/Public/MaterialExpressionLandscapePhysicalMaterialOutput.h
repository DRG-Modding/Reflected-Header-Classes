#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterialInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpressionCustomOutput -FallbackName=MaterialExpressionCustomOutput
#include "MaterialExpressionLandscapePhysicalMaterialOutput.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicalMaterialInput> Inputs;
    
    UMaterialExpressionLandscapePhysicalMaterialOutput();
};

