#pragma once
#include "CoreMinimal.h"
#include "ARSharedWorldReplicationState.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARSharedWorldReplicationState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 PreviewImageOffset;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ARWorldOffset;
    
    FARSharedWorldReplicationState();
};

