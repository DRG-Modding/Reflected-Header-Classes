#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationSharing -ObjectName=AnimationSharingStateProcessor -FallbackName=AnimationSharingStateProcessor
#include "PipelineAnimationSharingProcessor.generated.h"

UCLASS()
class UPipelineAnimationSharingProcessor : public UAnimationSharingStateProcessor {
    GENERATED_BODY()
public:
    UPipelineAnimationSharingProcessor();
};

