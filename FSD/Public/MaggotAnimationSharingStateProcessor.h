#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationSharing -ObjectName=AnimationSharingStateProcessor -FallbackName=AnimationSharingStateProcessor
#include "MaggotAnimationSharingStateProcessor.generated.h"

UCLASS(Blueprintable)
class UMaggotAnimationSharingStateProcessor : public UAnimationSharingStateProcessor {
    GENERATED_BODY()
public:
    UMaggotAnimationSharingStateProcessor();
};

