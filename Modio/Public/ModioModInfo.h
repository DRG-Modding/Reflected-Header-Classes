#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "ModioUser.h"
#include "ModioYoutubeURLList.h"
#include "ModioModTag.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "ModioFileMetadata.h"
#include "EModioMaturityFlags.h"
#include "ModioMetadata.h"
#include "ModioSketchfabURLList.h"
#include "ModioModStats.h"
#include "ModioModInfo.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioModID ModId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProfileName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ProfileSummary;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ProfileDescription;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ProfileDescriptionPlaintext;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ProfileUrl;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioUser ProfileSubmittedBy;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDateTime ProfileDateAdded;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDateTime ProfileDateUpdated;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDateTime ProfileDateLive;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EModioMaturityFlags ProfileMaturityOption;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString MetadataBlob;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioFileMetadata FileInfo;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FModioMetadata> MetadataKvp;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FModioModTag> Tags;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NumGalleryImages;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioYoutubeURLList YoutubeURLs;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioSketchfabURLList SketchfabURLs;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioModStats Stats;
    
    FModioModInfo();
};

