#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ItemSkinSet.generated.h"

UCLASS(BlueprintType)
class UItemSkinSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ColorIsLockedToSet;
    
    UItemSkinSet();
};

