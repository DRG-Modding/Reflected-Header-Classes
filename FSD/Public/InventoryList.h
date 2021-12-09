#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EItemCategory.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "InventoryList.generated.h"

class UTexture2D;
class UMaterialInterface;
class UItemID;
class AActor;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FInventoryListFilter, TSubclassOf<AActor>, itemClass, bool&, Result);

UCLASS(BlueprintType)
class FSD_API UInventoryList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> IconWeaponSetOutline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> IconWeaponSetFill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> LaserpointerMarkerMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> LaserpointerBeamMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemID* LaserPointerItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemID* TerrainScannerItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemID* ResupplyItem;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<UItemID*> PrimaryWeapons;
    
    UPROPERTY(EditAnywhere)
    TArray<UItemID*> SecondaryWeapons;
    
    UPROPERTY(EditAnywhere)
    TArray<UItemID*> TraversalTools;
    
    UPROPERTY(EditAnywhere)
    TArray<UItemID*> ClassTools;
    
    UPROPERTY(EditAnywhere)
    TArray<UItemID*> Armors;
    
    UPROPERTY(EditAnywhere)
    TArray<UItemID*> Flares;
    
    UPROPERTY(EditAnywhere)
    TArray<UItemID*> Grenades;
    
    UPROPERTY(EditAnywhere)
    TArray<UItemID*> MiningTools;
    
public:
    UFUNCTION(BlueprintPure)
    UItemID* GetPreviousUnlockedItem(UObject* WorldContextObject, EItemCategory Category, UItemID* currentItem) const;
    
    UFUNCTION(BlueprintPure)
    UItemID* GetPreviousItem(EItemCategory Category, UItemID* currentItem) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfItems(EItemCategory Category) const;
    
    UFUNCTION(BlueprintPure)
    UItemID* GetNextUnlockedItem(UObject* WorldContextObject, EItemCategory Category, UItemID* currentItem) const;
    
    UFUNCTION(BlueprintPure)
    UItemID* GetNextItem(EItemCategory Category, UItemID* currentItem) const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<AActor>> GetLoadedItemListFiltered(EItemCategory Category, FInventoryListFilter Filter) const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<AActor>> GetLoadedItemList(EItemCategory Category) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UItemID*> GetItemList(EItemCategory Category) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemIndex(EItemCategory Category, UItemID* Item) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UItemID*> GetAllItemsList() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckForInventoryAchievements(UObject* WorldContextObject);
    
    UInventoryList();
};

