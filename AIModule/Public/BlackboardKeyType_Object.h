#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeyType.h"
#include "BlackboardKeyType_Object.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class AIMODULE_API UBlackboardKeyType_Object : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UClass* BaseClass;
    
    UBlackboardKeyType_Object();
};

