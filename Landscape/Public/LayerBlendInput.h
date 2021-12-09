#pragma once
#include "CoreMinimal.h"
#include "ELandscapeLayerBlendType.h"
//CROSS-MODULE INCLUDE: Engine ExpressionInput
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "LayerBlendInput.generated.h"

USTRUCT(BlueprintType)
struct FLayerBlendInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName LayerName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ELandscapeLayerBlendType> BlendType;
    
    UPROPERTY()
    FExpressionInput LayerInput;
    
    UPROPERTY()
    FExpressionInput HeightInput;
    
    UPROPERTY(EditAnywhere)
    float PreviewWeight;
    
    UPROPERTY(EditAnywhere)
    FVector ConstLayerInput;
    
    UPROPERTY(EditAnywhere)
    float ConstHeightInput;
    
    LANDSCAPE_API FLayerBlendInput();
};

