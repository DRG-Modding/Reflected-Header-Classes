#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EUpgradeTiers.h"
#include "SavableDataAsset.h"
#include "RefundableInterface.h"
#include "CraftingCost.h"
#include "ItemUpgradeStatText.h"
#include "EUpgradeClass.h"
#include "UpgradeValues.h"
#include "ItemUpgrade.generated.h"

class UItemUpgradeElement;
class UItemUpgrade;
class UItemUpgradeCategory;
class UResourceData;
class AActor;
class AFSDPlayerState;
class UItemID;
class AFSDPlayerController;
class APlayerCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemUpgradeOnCrafted, UItemUpgrade*, Upgrade);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemUpgradeOnEquipped, UItemUpgrade*, Upgrade);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemUpgradeOnUnequipped, UItemUpgrade*, Upgrade);

UCLASS(EditInlineNew)
class FSD_API UItemUpgrade : public USavableDataAsset, public IRefundableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, Transient)
    FItemUpgradeOnCrafted OnCrafted;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FItemUpgradeOnEquipped OnEquipped;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FItemUpgradeOnUnequipped OnUnequipped;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    int32 Cost;
    
    UPROPERTY(EditAnywhere)
    bool UseOldCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUpgradeTiers UpgradeTier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUpgradeClass upgradeClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemUpgradeCategory* Category;
    
    UPROPERTY(VisibleAnywhere)
    TMap<UResourceData*, float> UpgradeCraftingCost;
    
    UPROPERTY(EditAnywhere)
    TArray<UResourceData*> ResourceCost;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UItemUpgradeElement*> Elements;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FItemUpgradeStatText> StatTexts;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnequipUpgrade(TSubclassOf<AActor> itemClass, AFSDPlayerState* PlayerState);
    
    UFUNCTION(BlueprintPure)
    TArray<FItemUpgradeStatText> GetUpgradeStatTexts() const;
    
    UFUNCTION(BlueprintPure)
    static FText GetUpgradeName(UItemUpgrade* Upgrade);
    
    UFUNCTION(BlueprintPure)
    TArray<FCraftingCost> GetUpgradeCost() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetSourceName();
    
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetGenericUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, UItemUpgrade* NewUpgradeClass);
    
    UFUNCTION(BlueprintPure)
    float GetCreditsCost() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipUpgrade(TSubclassOf<AActor> itemClass, AFSDPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void CraftItem(UItemID* ItemID, AFSDPlayerController* PlayerController, TSubclassOf<APlayerCharacter> previewedCharacter);
    
    UItemUpgrade();
};

