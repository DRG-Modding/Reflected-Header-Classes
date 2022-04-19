#pragma once
#include "CoreMinimal.h"
#include "ChunkId.generated.h"

USTRUCT(BlueprintType)
struct FSDENGINE_API FChunkId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int16 X;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int16 Y;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int16 Z;
    
    FChunkId();
};

