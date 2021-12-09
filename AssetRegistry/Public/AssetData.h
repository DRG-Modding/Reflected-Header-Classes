#pragma once
#include "CoreMinimal.h"
#include "AssetData.generated.h"

USTRUCT(BlueprintType)
struct FAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FName ObjectPath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName PackageName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName PackagePath;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName AssetName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName AssetClass;
    
    ASSETREGISTRY_API FAssetData();
};

