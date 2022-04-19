#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ELandscapeLayerBlendType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ExpressionInput -FallbackName=ExpressionInput
#include "LayerBlendInput.generated.h"

USTRUCT(BlueprintType)
struct FLayerBlendInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ELandscapeLayerBlendType> BlendType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FExpressionInput LayerInput;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FExpressionInput HeightInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ConstLayerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstHeightInput;
    
    LANDSCAPE_API FLayerBlendInput();
};

