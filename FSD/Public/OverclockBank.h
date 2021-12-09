#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "SchematicBankInterface.h"
#include "OverclockBank.generated.h"

class UOverclockUpgrade;
class UItemID;
class USchematic;

UCLASS()
class FSD_API UOverclockBank : public UDataAsset, public ISchematicBankInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<UOverclockUpgrade*, USchematic*> Overclocks;
    
    UPROPERTY(EditAnywhere)
    UItemID* OwningItem;
    
    UOverclockBank();
};

