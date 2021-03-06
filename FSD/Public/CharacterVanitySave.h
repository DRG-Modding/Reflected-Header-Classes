#pragma once
#include "CoreMinimal.h"
#include "CharacterVanityLoadout.h"
#include "EVanitySlot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "CharacterVanitySave.generated.h"

class UVanityItem;

USTRUCT(BlueprintType)
struct FCharacterVanitySave {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterVanityLoadout> Loadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> UnLockedVanityItemIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVanityItem*> UnLockedVanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVanitySlot, FGuid> NewVanityItems;
    
public:
    FSD_API FCharacterVanitySave();
};

