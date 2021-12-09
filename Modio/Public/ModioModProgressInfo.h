#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "ModioModProgressInfo.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModProgressInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int64 TotalDownloadSize;
    
    UPROPERTY(BlueprintReadOnly)
    int64 CurrentlyDownloadedBytes;
    
    UPROPERTY(BlueprintReadOnly)
    int64 TotalExtractedSizeOnDisk;
    
    UPROPERTY(BlueprintReadOnly)
    int64 CurrentlyExtractedBytes;
    
    UPROPERTY(BlueprintReadOnly)
    FModioModID ID;
    
    FModioModProgressInfo();
};

