#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
//CROSS-MODULE INCLUDE: CoreUObject Color
#include "ESchematicState.h"
#include "Schematic.generated.h"

class USchematicPricingTier;
class USchematic;
class USchematicCategory;
class UResourceData;
class USchematicRarity;
class UPlayerCharacterID;
class USchematicItem;
class UObject;
class UTexture;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSchematicOnSchematicAddedToInventory, USchematic*, Schematic);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSchematicOnSchematicReset, USchematic*, Schematic);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSchematicOnSchematicBuilt, USchematic*, Schematic);

UCLASS(EditInlineNew)
class FSD_API USchematic : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSchematicOnSchematicAddedToInventory OnSchematicAddedToInventory;
    
    UPROPERTY(BlueprintAssignable)
    FSchematicOnSchematicReset OnSchematicReset;
    
    UPROPERTY(BlueprintAssignable)
    FSchematicOnSchematicBuilt OnSchematicBuilt;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USchematicCategory* Category;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USchematicPricingTier* PricingTier;
    
    UPROPERTY(EditAnywhere)
    USchematicRarity* Rarity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterID* UsedByCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USchematicItem* Item;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<UResourceData*, int32> CraftingCost;
    
    UPROPERTY(EditAnywhere)
    bool CostIsLocked;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCraftingMaterialCost();
    
    UFUNCTION()
    void SetCostLocked(bool IsLocked);
    
    UFUNCTION(BlueprintPure)
    bool HasBeenForged(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintPure)
    bool HasBeenAwardedOrForged(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintPure)
    bool HasBeenAwarded(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintPure)
    ESchematicState GetSchematicState(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintPure)
    USchematicItem* GetSchematicItem() const;
    
    UFUNCTION(BlueprintPure)
    TMap<UResourceData*, int32> GetResourceCost() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetIconTint() const;
    
    UFUNCTION(BlueprintPure)
    UTexture* GetIcon(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAffordSchematic(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable)
    void BuildSchematic(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void AddSchematicToPlayerInventory(UObject* WorldContext);
    
    USchematic();
};

