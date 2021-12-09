#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "AnimNotify_HideBone.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_HideBone : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UAnimNotify_HideBone();
};

