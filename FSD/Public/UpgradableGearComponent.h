#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "UpgradeTier.h"
#include "MasteryItem.h"
#include "GearStatEntry.h"
#include "EItemUpgradeStatus.h"
#include "CraftingCost.h"
#include "UpgradableGearComponent.generated.h"

class UItemData;
class UTexture2D;
class UOverclockBank;
class UPlayerCharacterID;
class AActor;
class UItemUpgrade;
class UResourceData;
class UObject;
class UItemID;
class AFSDPlayerState;
class AFSDPlayerController;

UCLASS(BlueprintType)
class FSD_API UUpgradableGearComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UItemData* ItemData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FUpgradeTier> UpgradeTiers;
    
    UPROPERTY(EditAnywhere)
    UOverclockBank* OverclockBank;
    
    UPROPERTY(Transient)
    TArray<UItemUpgrade*> AllOverclocks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* IconLine;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* IconBG;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* IconDetailed;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> PreviewImage;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> PreviewActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Category;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CreditCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UResourceData*, float> ResourceCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RequiredCharacterLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMasteryItem> masteryLevels;
    
public:
    UFUNCTION(BlueprintCallable)
    static void SetGearStatText(UPARAM(Ref) FGearStatEntry& Entry, FText Text);
    
    UFUNCTION(BlueprintCallable)
    static bool PurchaseItem(UObject* WorldContextObject, UItemID* ItemID);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayerOwnesUpgradeInAllTiers(TSubclassOf<AActor> itemClass, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void MirrorUpgradePreviewStatus(UPARAM(Ref) FGearStatEntry& From, UPARAM(Ref) FGearStatEntry& to);
    
    UFUNCTION(BlueprintPure)
    static bool IsUpgradeEquipped(TSubclassOf<AActor> itemClass, UItemUpgrade* Upgrade, AFSDPlayerState* Player);
    
    UFUNCTION(BlueprintPure)
    static bool IsTierUnLocked(TSubclassOf<AActor> itemClass, int32 tierIndex, AFSDPlayerState* Player, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintPure)
    static bool IsOverclockingEnabled(UObject* WorldContextObject, AFSDPlayerState* Player, UPlayerCharacterID* characterID, TSubclassOf<AActor> itemClass);
    
    UFUNCTION(BlueprintPure)
    static bool IsItemUnlocked(UObject* WorldContextObject, UItemID* Item);
    
    UFUNCTION(BlueprintPure)
    static bool IsItemOwned(UObject* WorldContextObject, UItemID* Item);
    
    UFUNCTION(BlueprintPure)
    static bool IsItemEquipped(UObject* WorldContextObject, UItemID* ItemID);
    
    UFUNCTION(BlueprintPure)
    static int32 GetUpgradeTier(TSubclassOf<AActor> itemClass, UItemUpgrade* ItemUpgrade);
    
    UFUNCTION(BlueprintPure)
    FString GetSourceGearName() const;
    
    UFUNCTION(BlueprintPure)
    TMap<UResourceData*, float> GetResourceCost() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRequiredCharacterLevel() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetPreviewImage() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetPreviewActorClass() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UItemUpgrade*> GetOverClocks() const;
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMasteryProgress(UObject* WorldContextObject, UItemID* ItemID, int32& maxMastery);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMasteryItem> GetMasteryLevels(UItemID* ItemID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMasteryForLevel(const TArray<FMasteryItem>& NewMasteryLevels, int32 Level, FMasteryItem& outLevel);
    
    UFUNCTION(BlueprintPure)
    static TArray<FUpgradeTier> GetItemUpgradeTiers(TSubclassOf<AActor> itemClass);
    
    UFUNCTION(BlueprintPure)
    static EItemUpgradeStatus GetItemUpgradeStatus(UObject* WorldContextObject, TSubclassOf<AActor> itemClass, UItemUpgrade* ItemUpgrade, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintPure)
    static TArray<UItemUpgrade*> GetItemUpgrades(TSubclassOf<AActor> itemClass, TSubclassOf<UItemUpgrade> upgradeClass, AFSDPlayerState* Player, uint8 upgradeIndex);
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<AActor> GetItemPreviewClassFromActor(TSubclassOf<AActor> Actor);
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<AActor> GetItemPreviewClass(UItemID* ItemID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemMasteryForLevel(UItemID* ItemID, int32 Level, FMasteryItem& outLevel);
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetIconLine() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetIconDetailed();
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetIconBG();
    
    UFUNCTION(BlueprintCallable)
    static FText GetGearStatValue(UPARAM(Ref) FGearStatEntry& Entry);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGearStatEntry> GetGearStats(AFSDPlayerState* PlayerState, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintPure)
    static FString GetGearSourceName(UItemID* ItemID);
    
    UFUNCTION(BlueprintPure)
    FText GetGearName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetGearDescription() const;
    
    UFUNCTION(BlueprintPure)
    FText GetGearCategory() const;
    
    UFUNCTION(BlueprintPure)
    static TArray<UItemUpgrade*> GetEquippedUpgrades(TSubclassOf<AActor> itemClass, AFSDPlayerState* Player);
    
    UFUNCTION(BlueprintPure)
    static UItemUpgrade* GetEquippedUpgradeAtTier(TSubclassOf<AActor> itemClass, int32 tierIndex, UPlayerCharacterID* characterID, AFSDPlayerState* Player);
    
    UFUNCTION(BlueprintPure)
    static UItemUpgrade* GetEquippedOverclock(UObject* WorldContextObject, TSubclassOf<AActor> itemClass);
    
    UFUNCTION(BlueprintPure)
    static TArray<UItemUpgrade*> GetEquippableOverclocks(UObject* WorldContextObject, TSubclassOf<AActor> itemClass, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintPure)
    int32 GetCreditCost() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FCraftingCost> GetCraftingCost() const;
    
    UFUNCTION(BlueprintPure)
    static int32 GetCharacterLevelRequiredForItem(UItemID* ItemID);
    
    UFUNCTION(BlueprintPure)
    TArray<UItemUpgrade*> GetAllUpgrades() const;
    
    UFUNCTION(BlueprintCallable)
    static void ClearEquippedUpgrade(TSubclassOf<AActor> itemClass, int32 tierIndex, AFSDPlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    static void CheckMasteryUnlocks(UItemID* ItemID, AFSDPlayerController* Player);
    
    UFUNCTION(BlueprintPure)
    static bool CanItemOverclock(UObject* WorldContextObject, TSubclassOf<AActor> itemClass);
    
    UFUNCTION(BlueprintPure)
    static bool CanAffordUpgrade(UObject* WorldContextObject, UItemUpgrade* Upgrade);
    
    UFUNCTION(BlueprintPure)
    static bool CanAffordItem(UObject* WorldContextObject, UItemID* ItemID);
    
    UUpgradableGearComponent();
};

