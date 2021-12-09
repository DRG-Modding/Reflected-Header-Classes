#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstanceProxy
#include "AnimSequencerInstanceProxy.generated.h"

USTRUCT()
struct ANIMGRAPHRUNTIME_API FAnimSequencerInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FAnimSequencerInstanceProxy();
};

