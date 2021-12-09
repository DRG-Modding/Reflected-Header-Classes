#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "ItemLoadout.h"
#include "CharacterVanitySave.h"
#include "VictoryPoseSave.h"
#include "CharacterSave.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FCharacterSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid SaveGameID;
    
    UPROPERTY()
    int32 XP;
    
    UPROPERTY()
    bool HasCompletedRetirementCampaign;
    
    UPROPERTY()
    int32 TimesRetired;
    
    UPROPERTY()
    int32 RetiredCharacterLevels;
    
    UPROPERTY()
    bool HasSeenRetirementRewardScreen;
    
private:
    UPROPERTY()
    TSubclassOf<APlayerCharacter> CharacterClass;
    
    UPROPERTY()
    FCharacterVanitySave Vanity;
    
    UPROPERTY()
    int32 SelectedLoadout;
    
    UPROPERTY()
    FItemLoadout Loadout;
    
    UPROPERTY()
    TArray<FItemLoadout> Loadouts;
    
    UPROPERTY()
    FVictoryPoseSave VictoryPose;
    
public:
    FSD_API FCharacterSave();
};
