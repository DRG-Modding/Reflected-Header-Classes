#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "CustomAmmoCountWidget.generated.h"

class AItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCustomAmmoCountWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AItem> Item;
    
public:
    UCustomAmmoCountWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveItemSet();
    
};

