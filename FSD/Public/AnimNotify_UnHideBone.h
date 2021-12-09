#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "AnimNotify_UnHideBone.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_UnHideBone : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UAnimNotify_UnHideBone();
};

