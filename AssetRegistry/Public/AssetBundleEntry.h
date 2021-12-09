#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject PrimaryAssetId
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "AssetBundleEntry.generated.h"

USTRUCT(BlueprintType)
struct ASSETREGISTRY_API FAssetBundleEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPrimaryAssetId BundleScope;
    
    UPROPERTY()
    FName BundleName;
    
    UPROPERTY()
    TArray<FSoftObjectPath> BundleAssets;
    
    FAssetBundleEntry();
};

