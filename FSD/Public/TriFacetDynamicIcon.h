#pragma once
#include "CoreMinimal.h"
#include "TwoFacetDynamicIcon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "TriFacetDynamicIcon.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UTriFacetDynamicIcon : public UTwoFacetDynamicIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Primary3Tint1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Primary3Tint2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Primary3Texture;
    
    UPROPERTY(EditAnywhere)
    float Primary3Texture_BasePoint;
    
    UPROPERTY(EditAnywhere)
    float Primary3Texture_Contrast;
    
public:
    UTriFacetDynamicIcon();
};

