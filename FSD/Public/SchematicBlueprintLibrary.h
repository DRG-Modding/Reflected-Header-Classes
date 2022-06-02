#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SchematicBlueprintLibrary.generated.h"

class UItemUpgrade;
class UPlayerCharacterID;
class USchematic;
class UItemSkinSchematicCollection;
class UObject;
class USchematicCategory;

UCLASS(Blueprintable)
class USchematicBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USchematicBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void PriceSchematics(const TSet<USchematic*>& Schematics);
    
    UFUNCTION(BlueprintCallable)
    static void PriceAllSchematics(bool lockPrices);
    
    UFUNCTION(BlueprintCallable)
    static void LockSchematics(const TSet<USchematic*>& Schematics);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAnyUnlockableSchematics(UObject* WorldContextObject, UPlayerCharacterID* characterID, TSet<USchematicCategory*>& Categories);
    
    UFUNCTION(BlueprintCallable)
    static USchematicCategory* FindItemUpgradeSchematicCategory(UItemUpgrade* Upgrade);
    
    UFUNCTION(BlueprintCallable)
    static void AddSkinSchematicCollectionToSettings(UItemSkinSchematicCollection* Collection);
    
};

