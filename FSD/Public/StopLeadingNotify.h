#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "StopLeadingNotify.generated.h"

UCLASS(CollapseCategories)
class UStopLeadingNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UStopLeadingNotify();
};

