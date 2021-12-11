#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "WrapBox.generated.h"

class UWidget;
class UWrapBoxSlot;

UCLASS()
class UMG_API UWrapBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D InnerSlotPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WrapWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bExplicitWrapWidth;
    
    UFUNCTION(BlueprintCallable)
    void SetInnerSlotPadding(FVector2D InPadding);
    
    UFUNCTION(BlueprintCallable)
    UWrapBoxSlot* AddChildToWrapBox(UWidget* Content);
    
    UWrapBox();
};

