#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatInterval
#include "MaterialDamageMultiplierCondition.generated.h"

UCLASS(EditInlineNew)
class UMaterialDamageMultiplierCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval MultiplierRangeRequired;
    
    UPROPERTY(EditAnywhere)
    bool Invert;
    
public:
    UMaterialDamageMultiplierCondition();
};

