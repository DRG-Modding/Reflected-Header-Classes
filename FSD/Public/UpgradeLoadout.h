#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ItemUpgradeSelection.h"
#include "UpgradeLoadout.generated.h"

USTRUCT(BlueprintType)
struct FUpgradeLoadout {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FItemUpgradeSelection> Loadout;
    
public:
    FSD_API FUpgradeLoadout();
};

