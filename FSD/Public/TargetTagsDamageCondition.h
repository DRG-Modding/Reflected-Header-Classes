#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "TargetTagsDamageCondition.generated.h"

UCLASS(EditInlineNew)
class UTargetTagsDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery tagQuery;
    
public:
    UTargetTagsDamageCondition();
};

