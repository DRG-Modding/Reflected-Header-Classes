#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "DoubleDrillAnimInstance.generated.h"

class ADoubleDrillItem;

UCLASS(NonTransient)
class UDoubleDrillAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float DrillSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsMining;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsGunslinging;
    
    UPROPERTY(Transient)
    ADoubleDrillItem* Item;
    
public:
    UDoubleDrillAnimInstance();
};

