#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeyType.h"
#include "BlackboardKeyType_Class.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class AIMODULE_API UBlackboardKeyType_Class : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UClass* BaseClass;
    
    UBlackboardKeyType_Class();
};

