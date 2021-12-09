#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AlphaBlend
#include "RandomPlayerSequenceEntry.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRandomPlayerSequenceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChanceToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinLoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxLoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPlayRate;
    
    UPROPERTY(EditAnywhere)
    FAlphaBlend BlendIn;
    
    ANIMGRAPHRUNTIME_API FRandomPlayerSequenceEntry();
};

