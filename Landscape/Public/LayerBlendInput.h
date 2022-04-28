#pragma once
#include "CoreMinimal.h"
#include "ELandscapeLayerBlendType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ExpressionInput -FallbackName=ExpressionInput
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LayerBlendInput.generated.h"

USTRUCT(BlueprintType)
struct FLayerBlendInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LayerName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ELandscapeLayerBlendType> BlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput LayerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput HeightInput;
    
    UPROPERTY(EditAnywhere)
    float PreviewWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ConstLayerInput;
    
    UPROPERTY(EditAnywhere)
    float ConstHeightInput;
    
    LANDSCAPE_API FLayerBlendInput();
};

