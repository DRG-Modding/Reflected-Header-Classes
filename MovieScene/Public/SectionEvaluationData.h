#pragma once
#include "CoreMinimal.h"
#include "ESectionEvaluationFlags.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "SectionEvaluationData.generated.h"

USTRUCT()
struct FSectionEvaluationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ImplIndex;
    
    UPROPERTY()
    FFrameNumber ForcedTime;
    
    UPROPERTY()
    ESectionEvaluationFlags Flags;
    
    MOVIESCENE_API FSectionEvaluationData();
};

