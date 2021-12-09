#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "AnimNotify_PlaySound2D.generated.h"

class USoundBase;

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_PlaySound2D : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PitchMultiplier;
    
    UAnimNotify_PlaySound2D();
};

