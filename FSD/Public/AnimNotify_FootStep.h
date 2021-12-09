#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "AnimNotify_FootStep.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_FootStep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool IsLeft;
    
    UAnimNotify_FootStep();
};

