#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "PerkClaimEntry.generated.h"

USTRUCT(BlueprintType)
struct FPerkClaimEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid PerkID;
    
    UPROPERTY()
    int32 currentRank;
    
    FSD_API FPerkClaimEntry();
};

