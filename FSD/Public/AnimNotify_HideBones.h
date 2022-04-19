#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_HideBones.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_HideBones : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetBoneNames;
    
    UAnimNotify_HideBones();
};

