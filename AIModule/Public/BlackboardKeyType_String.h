#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeyType.h"
#include "BlackboardKeyType_String.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class AIMODULE_API UBlackboardKeyType_String : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString StringValue;
    
    UBlackboardKeyType_String();
};

