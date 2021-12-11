#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "EnemyAttacker.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UEnemyAttacker : public UInterface {
    GENERATED_BODY()
};

class IEnemyAttacker : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual float GetAttackDamageModifier() const PURE_VIRTUAL(GetAttackDamageModifier, return 0.0f;);
    
};

