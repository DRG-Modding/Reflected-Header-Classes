#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "Curve2DAppearance.generated.h"

USTRUCT(BlueprintType)
struct FCurve2DAppearance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Thickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Tint;
    
    UPROPERTY(EditAnywhere)
    float OutlineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OutlineTint;
    
    FSD_API FCurve2DAppearance();
};

