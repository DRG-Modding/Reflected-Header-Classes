#pragma once
#include "CoreMinimal.h"
#include "GameplayTagsList.h"
#include "GameplayTagCategoryRemap.h"
#include "GameplayTagRedirect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "RestrictedConfigInfo.h"
#include "GameplayTagsSettings.generated.h"

UCLASS(DefaultConfig, Config=GameplayTags)
class GAMEPLAYTAGS_API UGameplayTagsSettings : public UGameplayTagsList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ImportTagsFromConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WarnOnInvalidTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClearInvalidTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FastReplication;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InvalidTagCharacters;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagCategoryRemap> CategoryRemapping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> GameplayTagTableList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagRedirect> GameplayTagRedirects;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CommonlyReplicatedTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBitsForContainerSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetIndexFirstBitSegment;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRestrictedConfigInfo> RestrictedConfigFiles;
    
    UGameplayTagsSettings();
};

