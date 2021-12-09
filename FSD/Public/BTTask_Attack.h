#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
#include "BTTask_Attack.generated.h"

class UBehaviorTreeComponent;

UCLASS()
class UBTTask_Attack : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    FName AttackName;
    
protected:
    UFUNCTION()
    void OnAttackCompleted(UBehaviorTreeComponent* btComponent);
    
public:
    UBTTask_Attack();
};

