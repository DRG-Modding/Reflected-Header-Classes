#pragma once
#include "CoreMinimal.h"
#include "MediaSource.h"
#include "BaseMediaSource.generated.h"

UCLASS(Abstract, EditInlineNew)
class MEDIAASSETS_API UBaseMediaSource : public UMediaSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FName PlayerName;
    
public:
    UBaseMediaSource();
};

