#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "ItemRefundListItem.h"
#include "ItemRefundList.generated.h"

class UObject;

UCLASS()
class UItemRefundList : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool ResetListOnSave;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UObject>> Items;
    
    UPROPERTY(EditAnywhere)
    TMap<FGuid, FItemRefundListItem> ItemsToRefund;
    
public:
    UItemRefundList();
};

