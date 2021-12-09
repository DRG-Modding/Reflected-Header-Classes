#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeyType.h"
#include "BlackboardKeyType_String.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class AIMODULE_API UBlackboardKeyType_String : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString StringValue;
    
    UBlackboardKeyType_String();
};

