#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
#include "RandomPlayerSequenceEntry.h"
#include "AnimNode_RandomPlayer.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_RandomPlayer : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRandomPlayerSequenceEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShuffleMode;
    
    FAnimNode_RandomPlayer();
};

