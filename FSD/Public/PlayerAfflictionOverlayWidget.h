#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "PlayerAfflictionOverlayWidget.generated.h"

class UTexture2D;
class UPlayerAfflictionOverlay;

UCLASS(EditInlineNew)
class UPlayerAfflictionOverlayWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bOverlayActive;
    
    UPROPERTY(BlueprintReadOnly)
    UPlayerAfflictionOverlay* Overlay;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveEndOverlay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveBeginOverlay(UTexture2D* InTexture, FLinearColor InTint);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndOverlay();
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlay(UPlayerAfflictionOverlay* InOverlay);
    
    UPlayerAfflictionOverlayWidget();
};

