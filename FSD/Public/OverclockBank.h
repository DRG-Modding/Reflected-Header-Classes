#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "SchematicBankInterface.h"
#include "OverclockBank.generated.h"

class UOverclockUpgrade;
class USchematic;
class UItemID;

UCLASS()
class FSD_API UOverclockBank : public UDataAsset, public ISchematicBankInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<UOverclockUpgrade*, USchematic*> Overclocks;
    
    UPROPERTY(EditAnywhere)
    UItemID* OwningItem;
    
    UOverclockBank();
    
    // Fix for true pure virtual functions not being implemented
};

