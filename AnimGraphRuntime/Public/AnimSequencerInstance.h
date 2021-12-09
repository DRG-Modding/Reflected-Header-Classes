#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "SequencerAnimationSupport.h"
#include "AnimSequencerInstance.generated.h"

UCLASS(NonTransient)
class ANIMGRAPHRUNTIME_API UAnimSequencerInstance : public UAnimInstance, public ISequencerAnimationSupport {
    GENERATED_BODY()
public:
    UAnimSequencerInstance();
};

