#pragma once
#include "CoreMinimal.h"
#include "BrainComponent.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "BehaviorTreeComponent.generated.h"

class UBTNode;
class UBehaviorTree;

UCLASS()
class AIMODULE_API UBehaviorTreeComponent : public UBrainComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UBTNode*> NodeInstances;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UBehaviorTree* DefaultBehaviorTreeAsset;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTagCooldownEndTime(FGameplayTag CooldownTag) const;
    
    UFUNCTION(BlueprintCallable)
    void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
    
    UBehaviorTreeComponent();
};

