#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BTTask_RunBehaviorDynamic.generated.h"

class UBehaviorTree;

UCLASS()
class AIMODULE_API UBTTask_RunBehaviorDynamic : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InjectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* DefaultBehaviorAsset;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorAsset;
    
public:
    UBTTask_RunBehaviorDynamic();
};

