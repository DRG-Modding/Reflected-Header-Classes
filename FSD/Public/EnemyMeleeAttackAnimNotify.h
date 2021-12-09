#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "EnemyMeleeAttackAnimNotify.generated.h"

UCLASS(CollapseCategories)
class UEnemyMeleeAttackAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName AttackTag;
    
public:
    UEnemyMeleeAttackAnimNotify();
};

