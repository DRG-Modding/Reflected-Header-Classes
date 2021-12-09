#pragma once
#include "CoreMinimal.h"
#include "ModioFileMetadataID.h"
#include "ModioModID.h"
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "EModioVirusScanStatus.h"
#include "EModioVirusStatus.h"
#include "ModioFileMetadata.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioFileMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioFileMetadataID MetadataId;
    
    UPROPERTY(BlueprintReadOnly)
    FModioModID ModId;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime DateAdded;
    
    UPROPERTY(BlueprintReadOnly)
    EModioVirusScanStatus CurrentVirusScanStatus;
    
    UPROPERTY(BlueprintReadOnly)
    EModioVirusStatus CurrentVirusStatus;
    
    UPROPERTY(BlueprintReadOnly)
    int64 Filesize;
    
    UPROPERTY(BlueprintReadOnly)
    FString Filename;
    
    UPROPERTY(BlueprintReadOnly)
    FString Version;
    
    UPROPERTY(BlueprintReadOnly)
    FString Changelog;
    
    UPROPERTY(BlueprintReadOnly)
    FString MetadataBlob;
    
    FModioFileMetadata();
};

