#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify_PlaySound -FallbackName=AnimNotify_PlaySound
#include "FSDAnimNotify_PlaySound.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFSDAnimNotify_PlaySound : public UAnimNotify_PlaySound {
    GENERATED_BODY()
public:
    UFSDAnimNotify_PlaySound();
};

