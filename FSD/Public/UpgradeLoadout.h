#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "ItemUpgradeSelection.h"
#include "UpgradeLoadout.generated.h"

USTRUCT(BlueprintType)
struct FUpgradeLoadout {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<FGuid, FItemUpgradeSelection> Loadout;
    
public:
    FSD_API FUpgradeLoadout();
};

