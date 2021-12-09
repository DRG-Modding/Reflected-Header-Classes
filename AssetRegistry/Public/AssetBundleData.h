#pragma once
#include "CoreMinimal.h"
#include "AssetBundleEntry.h"
#include "AssetBundleData.generated.h"

USTRUCT()
struct ASSETREGISTRY_API FAssetBundleData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAssetBundleEntry> Bundles;
    
    FAssetBundleData();
};

