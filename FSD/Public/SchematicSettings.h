#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ESchematicType.h"
#include "SchematicType.h"
#include "SchematicSettings.generated.h"

class UDataTable;
class UItemSkinSchematicCollection;
class USchematic;
class USchematicBank;
class UOverclockBank;
class USchematicBankBase;
class USchematicCategory;
class USchematicPricingTier;
class USchematicRarity;

UCLASS(BlueprintType)
class USchematicSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDataTable* PricingTable;
    
    UPROPERTY(EditAnywhere)
    USchematic* BlankSchematic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<USchematicBank*> SchematicBanks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<UOverclockBank*> OverclockBanks;
    
    UPROPERTY(EditAnywhere)
    TSet<UItemSkinSchematicCollection*> SkinSchematicCollections;
    
    UPROPERTY(EditAnywhere)
    TSet<USchematicBankBase*> VanitySchematicBanks;
    
    UPROPERTY(EditAnywhere)
    TMap<ESchematicType, FSchematicType> SchematicTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USchematicBank* EndlessSchematics;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSet<USchematicCategory*> Categories;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USchematicCategory*> OverclockCategories;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USchematicCategory*> VanityCategories;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USchematicCategory*> EndlessCategories;
    
    UPROPERTY(EditAnywhere)
    USchematicPricingTier* OverclockPricingTier;
    
    UPROPERTY(EditAnywhere)
    TArray<USchematicPricingTier*> VanityPricingTiers;
    
    UPROPERTY(EditAnywhere)
    TArray<USchematicRarity*> VanityRarity;
    
    UPROPERTY(EditAnywhere)
    TArray<USchematicRarity*> OverclockRarity;
    
    UPROPERTY(EditAnywhere)
    TArray<USchematicRarity*> EndlessRarity;
    
    UFUNCTION(BlueprintPure)
    FSchematicType GetSchematicTypeData(ESchematicType InType);
    
    UFUNCTION()
    TSet<USchematic*> GetSchematics() const;
    
    USchematicSettings();
};

