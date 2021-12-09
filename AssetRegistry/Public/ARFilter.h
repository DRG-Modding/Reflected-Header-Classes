#pragma once
#include "CoreMinimal.h"
#include "ARFilter.generated.h"

USTRUCT(BlueprintType)
struct FARFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FName> PackageNames;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FName> PackagePaths;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FName> ObjectPaths;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FName> ClassNames;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSet<FName> RecursiveClassesExclusionSet;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bRecursivePaths;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bRecursiveClasses;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIncludeOnlyOnDiskAssets;
    
    ASSETREGISTRY_API FARFilter();
};

