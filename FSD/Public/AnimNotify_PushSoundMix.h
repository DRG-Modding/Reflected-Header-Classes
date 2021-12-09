#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "AnimNotify_PushSoundMix.generated.h"

class USoundMix;

UCLASS(CollapseCategories)
class UAnimNotify_PushSoundMix : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundMix* SoundMix;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UAnimNotify_PushSoundMix();
};

