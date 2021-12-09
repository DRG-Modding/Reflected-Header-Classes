#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "PerkEquipEntry.generated.h"

USTRUCT(BlueprintType)
struct FPerkEquipEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid characterID;
    
    UPROPERTY()
    TArray<FGuid> PerkIDs;
    
    FSD_API FPerkEquipEntry();
};

