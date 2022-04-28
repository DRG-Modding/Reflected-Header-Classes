#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "FSDInWorldWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFSDInWorldWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHUDVisibile;
    
public:
    UFSDInWorldWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHUDVisibilityChanged(bool InHudVisible);
    
    UFUNCTION(BlueprintCallable)
    void CallbackHUDVisibilityChanged(bool InHudVisible);
    
};

