#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "ModioModProgressInfo.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModProgressInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 TotalDownloadSize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 CurrentlyDownloadedBytes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 TotalExtractedSizeOnDisk;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 CurrentlyExtractedBytes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FModioModID ID;
    
    FModioModProgressInfo();
};

