#pragma once
#include "CoreMinimal.h"
#include "MediaPlayerTrackOptions.generated.h"

USTRUCT(BlueprintType)
struct FMediaPlayerTrackOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 Audio;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Caption;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MetaData;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Script;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Subtitle;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Text;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Video;
    
    MEDIAUTILS_API FMediaPlayerTrackOptions();
};

