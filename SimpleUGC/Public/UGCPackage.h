#pragma once
#include "CoreMinimal.h"
#include "EUGCApprovalStatus.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "UGCPackage.generated.h"

UCLASS(BlueprintType)
class SIMPLEUGC_API UUGCPackage : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly)
    FString Version;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModURL;
    
    UPROPERTY(BlueprintReadOnly)
    FString Categories;
    
    UPROPERTY(BlueprintReadOnly)
    EUGCApprovalStatus Status;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModPath;
    
    UPROPERTY(BlueprintReadOnly)
    FString PakFileLocation;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> PakFileAssets;
    
    UPROPERTY(BlueprintReadOnly)
    FString Author;
    
    UPROPERTY(BlueprintReadOnly)
    FString AuthorURL;
    
    UPROPERTY(BlueprintReadOnly)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsMounted;
    
    UPROPERTY(BlueprintReadWrite)
    bool MountingToBeApplied;
    
    UPROPERTY(BlueprintReadWrite)
    bool DeprecatedLocation;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShowStatusForAudioCosmetic;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<int64> Dependencies;
    
    UPROPERTY(BlueprintReadWrite)
    bool DependencyRemoved;
    
    UPROPERTY(BlueprintReadOnly)
    bool PackagedForLatestVersion;
    
    UPROPERTY(BlueprintReadWrite)
    bool OverridePackedForLatestVersion;
    
    UPROPERTY(BlueprintReadWrite)
    FDateTime LastUpdated;
    
    UFUNCTION(BlueprintPure)
    FString GetIdAsString();
    
    UFUNCTION(BlueprintPure)
    int64 GetIdAsInt();
    
    UUGCPackage();
};

