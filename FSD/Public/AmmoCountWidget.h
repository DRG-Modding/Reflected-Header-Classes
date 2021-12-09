#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "AmmoCountWidget.generated.h"

class AItem;
class APlayerCharacter;
class UItemAggregator;

UCLASS(Abstract, EditInlineNew)
class UAmmoCountWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AItem* Item;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UItemAggregator* Aggregator;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnVisibleChanged(bool Visible, bool showClipCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTotalVisibleChanged(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTotalChanged(int32 Total);
    
    UFUNCTION()
    void OnItemTotalChanged(int32 Value);
    
    UFUNCTION()
    void OnItemEquipped(AItem* NewItem);
    
    UFUNCTION()
    void OnItemAmountChanged(int32 Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAmountChanged(int32 count);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DoItemEquipped();
    
public:
    UAmmoCountWidget();
};

