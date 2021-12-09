#pragma once
#include "CoreMinimal.h"
#include "CharacterVanityLoadout.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "EVanitySlot.h"
#include "CharacterVanitySave.generated.h"

class UVanityItem;

USTRUCT(BlueprintType)
struct FCharacterVanitySave {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FCharacterVanityLoadout> Loadouts;
    
    UPROPERTY()
    TArray<FGuid> UnLockedVanityItemIDs;
    
    UPROPERTY()
    FGuid EquippedHeadItemID;
    
    UPROPERTY()
    FGuid EquippedBeardItemID;
    
    UPROPERTY()
    FGuid EquippedArmorItemID;
    
    UPROPERTY()
    FGuid EquippedArmorMaterialItemID;
    
    UPROPERTY()
    FGuid EquippedBeardColorItemID;
    
    UPROPERTY()
    FGuid EquippedSkinColorItemID;
    
    UPROPERTY()
    FGuid EquippedEyebrowsItemID;
    
    UPROPERTY()
    FGuid EquippedMoustacheItemID;
    
    UPROPERTY()
    FGuid EquippedSideburnsItemID;
    
    UPROPERTY()
    TArray<UVanityItem*> UnLockedVanityItems;
    
    UPROPERTY()
    TMap<EVanitySlot, FGuid> NewVanityItems;
    
public:
    FSD_API FCharacterVanitySave();
};
