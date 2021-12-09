#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "ItemsBarIcon.generated.h"

class UItemsBar;
class AItem;
class APlayerCharacter;

UCLASS(Abstract, EditInlineNew)
class UItemsBarIcon : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool Selected;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UItemsBar* ItemBar;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AItem* Item;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Index;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnselect();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelect();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInit();
    
public:
    UItemsBarIcon();
};

