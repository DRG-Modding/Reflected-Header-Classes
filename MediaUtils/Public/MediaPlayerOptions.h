#pragma once
#include "CoreMinimal.h"
#include "MediaPlayerTrackOptions.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "EMediaPlayerOptionBooleanOverride.h"
#include "MediaPlayerOptions.generated.h"

USTRUCT(BlueprintType)
struct FMediaPlayerOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMediaPlayerTrackOptions Tracks;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTimespan SeekTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EMediaPlayerOptionBooleanOverride PlayOnOpen;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EMediaPlayerOptionBooleanOverride Loop;
    
    MEDIAUTILS_API FMediaPlayerOptions();
};

