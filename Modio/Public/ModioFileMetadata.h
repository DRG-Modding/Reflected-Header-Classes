#pragma once
#include "CoreMinimal.h"
#include "ModioFileMetadataID.h"
#include "ModioModID.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "EModioVirusScanStatus.h"
#include "EModioVirusStatus.h"
#include "ModioFileMetadata.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioFileMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioFileMetadataID MetadataId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioModID ModId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDateTime DateAdded;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EModioVirusScanStatus CurrentVirusScanStatus;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EModioVirusStatus CurrentVirusStatus;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 Filesize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Changelog;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString MetadataBlob;
    
    FModioFileMetadata();
};

