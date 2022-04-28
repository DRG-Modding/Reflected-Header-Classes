#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "PlayerAfflictionOverlayWidget.generated.h"

class UPlayerAfflictionOverlay;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UPlayerAfflictionOverlayWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverlayActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerAfflictionOverlay* Overlay;
    
public:
    UPlayerAfflictionOverlayWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEndOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginOverlay(UTexture2D* InTexture, FLinearColor InTint);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndOverlay();
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlay(UPlayerAfflictionOverlay* InOverlay);
    
};

