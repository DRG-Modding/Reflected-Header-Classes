#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "ModioPopupContainer.generated.h"

class UModioPopupBase;

UCLASS(EditInlineNew)
class UModioPopupContainer : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UModioPopupBase*> PopupStack;
    
    UPROPERTY(Export, Transient)
    TArray<UModioPopupBase*> PopupCache;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UModioPopupBase* PushPopup(TSubclassOf<UModioPopupBase> PopupClass);
    
    UFUNCTION(BlueprintCallable)
    UModioPopupBase* PopPopup(TSubclassOf<UModioPopupBase> PopupClass);
    
    UModioPopupContainer();
};

