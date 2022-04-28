#pragma once
#include "CoreMinimal.h"
#include "EnemyAIController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "ConvertedRobotController.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class AConvertedRobotController : public AEnemyAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CheckRangeInterval;
    
    UPROPERTY(EditAnywhere)
    float MaxTimeInRange;
    
    UPROPERTY(EditAnywhere)
    float PersonalSpaceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery FriendlyTargetingQuery;
    
    UPROPERTY(EditAnywhere)
    float SpecialAttackRange;
    
    UPROPERTY(EditAnywhere)
    float SpecialAttackFireRate;
    
    UPROPERTY(EditAnywhere)
    float WaitBeforeSpecial;
    
    UPROPERTY(EditAnywhere)
    float WaitAfterSpecial;
    
    UPROPERTY(EditAnywhere)
    float MinSpecialAttackCooldown;
    
    UPROPERTY(EditAnywhere)
    float MaxSpecialAttackCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviourTree;
    
private:
    UPROPERTY(EditAnywhere)
    float UpdateTargetInterval;
    
    UPROPERTY(EditAnywhere)
    float PowerDownAfterSeconds;
    
public:
    AConvertedRobotController();
    UFUNCTION(BlueprintCallable)
    void ResetCloseTimer();
    
};

