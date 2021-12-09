#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "AnimNotify_CameraShake.generated.h"

class UCameraShake;

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_CameraShake : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float InnerRadius;
    
    UPROPERTY(EditAnywhere)
    float OuterRadius;
    
    UPROPERTY(EditAnywhere)
    bool ControllerOnly;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShake> CameraShake;
    
    UAnimNotify_CameraShake();
};

