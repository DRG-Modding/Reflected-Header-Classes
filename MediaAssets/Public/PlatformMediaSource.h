#pragma once
#include "CoreMinimal.h"
#include "MediaSource.h"
#include "PlatformMediaSource.generated.h"

UCLASS(EditInlineNew)
class MEDIAASSETS_API UPlatformMediaSource : public UMediaSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UMediaSource* MediaSource;
    
public:
    UPlatformMediaSource();
};

