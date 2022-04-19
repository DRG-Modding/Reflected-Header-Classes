#pragma once
#include "CoreMinimal.h"
#include "ARSharedWorldReplicationState.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARSharedWorldReplicationState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 PreviewImageOffset;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ARWorldOffset;
    
    FARSharedWorldReplicationState();
};

