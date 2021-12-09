#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AnimationSharing AnimationSharingStateProcessor
#include "PipelineAnimationSharingProcessor.generated.h"

UCLASS()
class UPipelineAnimationSharingProcessor : public UAnimationSharingStateProcessor {
    GENERATED_BODY()
public:
    UPipelineAnimationSharingProcessor();
};

