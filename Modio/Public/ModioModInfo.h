#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "ModioFileMetadata.h"
#include "ModioYoutubeURLList.h"
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "ModioUser.h"
#include "EModioMaturityFlags.h"
#include "ModioMetadata.h"
#include "ModioModTag.h"
#include "ModioSketchfabURLList.h"
#include "ModioModStats.h"
#include "ModioModInfo.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioModID ModId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ProfileName;
    
    UPROPERTY(BlueprintReadOnly)
    FString ProfileSummary;
    
    UPROPERTY(BlueprintReadOnly)
    FString ProfileDescription;
    
    UPROPERTY(BlueprintReadOnly)
    FString ProfileDescriptionPlaintext;
    
    UPROPERTY(BlueprintReadOnly)
    FString ProfileUrl;
    
    UPROPERTY(BlueprintReadOnly)
    FModioUser ProfileSubmittedBy;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime ProfileDateAdded;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime ProfileDateUpdated;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime ProfileDateLive;
    
    UPROPERTY(BlueprintReadOnly)
    EModioMaturityFlags ProfileMaturityOption;
    
    UPROPERTY(BlueprintReadOnly)
    FString MetadataBlob;
    
    UPROPERTY(BlueprintReadOnly)
    FModioFileMetadata FileInfo;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FModioMetadata> MetadataKvp;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FModioModTag> Tags;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumGalleryImages;
    
    UPROPERTY(BlueprintReadOnly)
    FModioYoutubeURLList YoutubeURLs;
    
    UPROPERTY(BlueprintReadOnly)
    FModioSketchfabURLList SketchfabURLs;
    
    UPROPERTY(BlueprintReadOnly)
    FModioModStats Stats;
    
    FModioModInfo();
};

