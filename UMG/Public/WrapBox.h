#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
#include "WrapBox.generated.h"

class UWrapBoxSlot;
class UWidget;

UCLASS()
class UMG_API UWrapBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InnerSlotPadding;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float WrapWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrapSize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bExplicitWrapWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExplicitWrapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UWrapBox();
    UFUNCTION(BlueprintCallable)
    void SetInnerSlotPadding(FVector2D InPadding);
    
    UFUNCTION(BlueprintCallable)
    UWrapBoxSlot* AddChildToWrapBox(UWidget* Content);
    
};

