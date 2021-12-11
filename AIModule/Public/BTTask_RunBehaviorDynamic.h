#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "BTTaskNode.h"
#include "BTTask_RunBehaviorDynamic.generated.h"

class UBehaviorTree;

UCLASS()
class AIMODULE_API UBTTask_RunBehaviorDynamic : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag InjectionTag;
    
    UPROPERTY(EditAnywhere)
    UBehaviorTree* DefaultBehaviorAsset;
    
    UPROPERTY()
    UBehaviorTree* BehaviorAsset;
    
public:
    UBTTask_RunBehaviorDynamic();
};

