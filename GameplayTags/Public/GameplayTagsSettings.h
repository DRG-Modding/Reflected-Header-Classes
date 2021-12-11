#pragma once
#include "CoreMinimal.h"
#include "GameplayTagsList.h"
#include "GameplayTagCategoryRemap.h"
#include "RestrictedConfigInfo.h"
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "GameplayTagRedirect.h"
#include "GameplayTagsSettings.generated.h"

UCLASS(DefaultConfig, Config=GameplayTags)
class GAMEPLAYTAGS_API UGameplayTagsSettings : public UGameplayTagsList {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool ImportTagsFromConfig;
    
    UPROPERTY(Config, EditAnywhere)
    bool WarnOnInvalidTags;
    
    UPROPERTY(Config, EditAnywhere)
    bool FastReplication;
    
    UPROPERTY(Config, EditAnywhere)
    FString InvalidTagCharacters;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FGameplayTagCategoryRemap> CategoryRemapping;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FSoftObjectPath> GameplayTagTableList;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FGameplayTagRedirect> GameplayTagRedirects;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FName> CommonlyReplicatedTags;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumBitsForContainerSize;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NetIndexFirstBitSegment;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FRestrictedConfigInfo> RestrictedConfigFiles;
    
    UGameplayTagsSettings();
};

