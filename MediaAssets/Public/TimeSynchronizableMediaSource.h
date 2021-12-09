#pragma once
#include "CoreMinimal.h"
#include "BaseMediaSource.h"
#include "TimeSynchronizableMediaSource.generated.h"

UCLASS(Abstract, EditInlineNew)
class MEDIAASSETS_API UTimeSynchronizableMediaSource : public UBaseMediaSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseTimeSynchronization;
    
    UPROPERTY(EditAnywhere)
    int32 FrameDelay;
    
    UPROPERTY(EditAnywhere)
    double TimeDelay;
    
    UTimeSynchronizableMediaSource();
};

