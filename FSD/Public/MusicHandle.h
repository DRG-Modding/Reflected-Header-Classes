#pragma once
#include "CoreMinimal.h"
#include "MusicHandle.generated.h"

USTRUCT(BlueprintType)
struct FMusicHandle {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 MusicHandle;
    
    FSD_API FMusicHandle();
};

