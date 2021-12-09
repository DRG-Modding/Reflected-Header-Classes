#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotifyState
#include "AnimNotifyState_SoundMix.generated.h"

class USoundMix;

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_SoundMix : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USoundMix* SoundMix;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
public:
    UAnimNotifyState_SoundMix();
};

