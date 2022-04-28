#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ModioPopupContainer.generated.h"

class UModioPopupBase;

UCLASS(Blueprintable, EditInlineNew)
class UModioPopupContainer : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UModioPopupBase*> PopupStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UModioPopupBase*> PopupCache;
    
public:
    UModioPopupContainer();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UModioPopupBase* PushPopup(TSubclassOf<UModioPopupBase> PopupClass);
    
    UFUNCTION(BlueprintCallable)
    UModioPopupBase* PopPopup(TSubclassOf<UModioPopupBase> PopupClass);
    
};

