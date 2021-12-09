#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FSDUserWidget.h"
#include "ItemsBar.generated.h"

class UItemsBarIcon;
class AItem;

UCLASS(Abstract, EditInlineNew)
class UItemsBar : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UItemsBarIcon> DefaultItemWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowSupplyItem;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TArray<UItemsBarIcon*> ItemIcons;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UItemsBarIcon* SupplyIcon;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UItemsBarIcon* SelectedIcon;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSupplyItemUnequipped(UItemsBarIcon* ItemIcon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSupplyItemEquipped(UItemsBarIcon* ItemIcon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSupplyItemAdded(UItemsBarIcon* ItemIcon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemUnequipped(UItemsBarIcon* ItemIcon);
    
    UFUNCTION()
    void OnItemsLoaded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemEquipped(UItemsBarIcon* ItemIcon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemAdded(UItemsBarIcon* ItemIcon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClear();
    
    UFUNCTION()
    void ItemEquipped(AItem* NewItem);
    
    UFUNCTION()
    void ItemClicked(AItem* NewItem);
    
public:
    UItemsBar();
};

