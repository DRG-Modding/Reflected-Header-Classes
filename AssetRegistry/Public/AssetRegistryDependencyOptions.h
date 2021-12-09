#pragma once
#include "CoreMinimal.h"
#include "AssetRegistryDependencyOptions.generated.h"

USTRUCT(BlueprintType)
struct FAssetRegistryDependencyOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIncludeSoftPackageReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIncludeHardPackageReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIncludeSearchableNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIncludeSoftManagementReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIncludeHardManagementReferences;
    
    ASSETREGISTRY_API FAssetRegistryDependencyOptions();
};

