#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ItemSettings.generated.h"

class UItemID;
class UItemData;

UCLASS()
class UItemSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<UItemID*, UItemData*> ItemData;
    
public:
    UItemSettings();
};

