#pragma once
#include "CoreMinimal.h"
#include "ChunkOffset.h"
#include "ChunkId.h"
#include "ChunckIDAndOffset.generated.h"

USTRUCT()
struct FChunckIDAndOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FChunkId ChunkId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FChunkOffset Offset;
    
    FSDENGINE_API FChunckIDAndOffset();
};

