#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EnemyMeleeAttackAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UEnemyMeleeAttackAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackTag;
    
public:
    UEnemyMeleeAttackAnimNotify();
};

