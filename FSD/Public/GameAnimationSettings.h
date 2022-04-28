#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GameAnimationSettings.generated.h"

UCLASS(Blueprintable)
class UGameAnimationSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UGameAnimationSettings();
};

