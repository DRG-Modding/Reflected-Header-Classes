#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "BlackboardKeyType.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class AIMODULE_API UBlackboardKeyType : public UObject {
    GENERATED_BODY()
public:
    UBlackboardKeyType();
};

