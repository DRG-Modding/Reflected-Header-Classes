#pragma once
#include "CoreMinimal.h"
#include "BehaviorTreeTemplateInfo.generated.h"

class UBehaviorTree;
class UBTCompositeNode;

USTRUCT(BlueprintType)
struct FBehaviorTreeTemplateInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBehaviorTree* Asset;
    
    UPROPERTY(Transient)
    UBTCompositeNode* Template;
    
    AIMODULE_API FBehaviorTreeTemplateInfo();
};

