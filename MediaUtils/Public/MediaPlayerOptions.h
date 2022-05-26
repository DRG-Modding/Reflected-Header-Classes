#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MediaPlayerTrackOptions.h"
#include "EMediaPlayerOptionBooleanOverride.h"
#include "MediaPlayerOptions.generated.h"

USTRUCT(BlueprintType)
struct FMediaPlayerOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaPlayerTrackOptions Tracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan SeekTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaPlayerOptionBooleanOverride PlayOnOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaPlayerOptionBooleanOverride Loop;
    
    MEDIAUTILS_API FMediaPlayerOptions();
};

