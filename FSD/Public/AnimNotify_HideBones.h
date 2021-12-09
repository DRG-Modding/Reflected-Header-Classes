#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "AnimNotify_HideBones.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_HideBones : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> TargetBoneNames;
    
    UAnimNotify_HideBones();
};

