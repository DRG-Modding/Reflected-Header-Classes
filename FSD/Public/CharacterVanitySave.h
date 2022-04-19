#pragma once
#include "CoreMinimal.h"
#include "CharacterVanityLoadout.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EVanitySlot.h"
#include "CharacterVanitySave.generated.h"

class UVanityItem;

USTRUCT(BlueprintType)
struct FCharacterVanitySave {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FCharacterVanityLoadout> Loadouts;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnLockedVanityItemIDs;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UVanityItem*> UnLockedVanityItems;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<EVanitySlot, FGuid> NewVanityItems;
    
public:
    FSD_API FCharacterVanitySave();
};

