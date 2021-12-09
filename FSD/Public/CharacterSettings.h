#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "CharacterSettings.generated.h"

class UDialogDataAsset;
class APlayerCharacter;
class USkeletalMesh;
class UPlayerCharacterID;
class ACarriableItem;
class UCharacterVanityItems;
class UUseAnimationSetting;
class UDebrisPositioning;
class UTerrainPlacementComponent;
class UAsyncManager;

UCLASS(BlueprintType)
class UCharacterSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<APlayerCharacter>> RankedHeroClasses;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<APlayerCharacter>> LoadedClasses;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> PlayerRankNames;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> CharacterXPLevels;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FGuid, UPlayerCharacterID*> PlayerCharacterIDMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<UPlayerCharacterID*> PlayerCharacterIDs;
    
    UPROPERTY(EditAnywhere)
    UPlayerCharacterID* BoscoID;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* NoHead;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* DefaultHead;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* ThickNeck;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* ThinNeck;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ACarriableItem> CarriableBagClass;
    
    UPROPERTY(EditAnywhere)
    UUseAnimationSetting* ThrowItemAnimSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UPlayerCharacterID*, UCharacterVanityItems*> CharacterVanityItems;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* AutoReloadShout;
    
    UPROPERTY(EditAnywhere)
    UDebrisPositioning* TeleportPositioning;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTerrainPlacementComponent> TeleportPlacement;
    
    UFUNCTION(BlueprintCallable)
    void PreloadAllInventories(UAsyncManager* AsyncManager);
    
    UFUNCTION(BlueprintPure)
    UPlayerCharacterID* GetPlayerCharacterID(const FGuid& ID) const;
    
    UCharacterSettings();
};

