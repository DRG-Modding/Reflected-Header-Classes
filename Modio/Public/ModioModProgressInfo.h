#pragma once
#include "CoreMinimal.h"
#include "ModioModID.h"
#include "ModioModProgressInfo.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModProgressInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 TotalDownloadSize;
    
    UPROPERTY(EditAnywhere)
    int64 CurrentlyDownloadedBytes;
    
    UPROPERTY(EditAnywhere)
    int64 TotalExtractedSizeOnDisk;
    
    UPROPERTY(EditAnywhere)
    int64 CurrentlyExtractedBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModID ID;
    
    FModioModProgressInfo();
};

