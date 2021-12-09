#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AssetRegistry AssetData
//CROSS-MODULE INCLUDE: Engine EngineSubsystem
#include "AssetTagsSubsystem.generated.h"

class UObject;

UCLASS(BlueprintType)
class ASSETTAGS_API UAssetTagsSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetCollectionsContainingAssetPtr(const UObject* AssetPtr);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetCollectionsContainingAssetData(const FAssetData& AssetData);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetCollectionsContainingAsset(const FName AssetPathName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetCollections();
    
    UFUNCTION(BlueprintCallable)
    TArray<FAssetData> GetAssetsInCollection(const FName Name);
    
    UFUNCTION(BlueprintCallable)
    bool CollectionExists(const FName Name);
    
    UAssetTagsSubsystem();
};

