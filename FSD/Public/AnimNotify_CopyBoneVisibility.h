#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "AnimNotify_CopyBoneVisibility.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_CopyBoneVisibility : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SourceBoneName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TargetBoneNames;
    
    UPROPERTY(EditAnywhere)
    bool HideSourceBone;
    
    UAnimNotify_CopyBoneVisibility();
};

