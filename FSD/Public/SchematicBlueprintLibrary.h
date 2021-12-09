#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "SchematicBlueprintLibrary.generated.h"

class USchematicCategory;
class UItemUpgrade;
class UPlayerCharacterID;
class UObject;
class UItemSkinSchematicCollection;
class USchematic;

UCLASS(BlueprintType)
class USchematicBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void PriceAllSchematics(bool lockPrices);
    
    UFUNCTION(BlueprintPure)
    static bool IsSchematicOwnedOrForged(UObject* WorldContextObject, USchematic* Schematic);
    
    UFUNCTION(BlueprintPure)
    static bool IsSchematicOwned(UObject* WorldContextObject, USchematic* Schematic);
    
    UFUNCTION(BlueprintPure)
    static bool IsSchematicForged(UObject* WorldContextObject, USchematic* Schematic);
    
    UFUNCTION(BlueprintPure)
    static bool HasAnyUnlockableSchematics(UObject* WorldContextObject, UPlayerCharacterID* characterID, TSet<USchematicCategory*>& Categories);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USchematic*> GetRewardableSchematics(UObject* WorldContextObject, UPlayerCharacterID* characterID, USchematicCategory* Category);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USchematic*> GetForgedSchematic(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static USchematicCategory* FindItemUpgradeSchematicCategory(UItemUpgrade* Upgrade);
    
    UFUNCTION(BlueprintCallable)
    static void AddSkinSchematicCollectionToSettings(UItemSkinSchematicCollection* Collection);
    
    USchematicBlueprintLibrary();
};
