#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EnemyRangedAttackAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UEnemyRangedAttackAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UEnemyRangedAttackAnimNotify();
};

