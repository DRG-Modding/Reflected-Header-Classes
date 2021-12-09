#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "WeaponHitCountEffect.generated.h"

UCLASS(Abstract, EditInlineNew)
class UWeaponHitCountEffect : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool UsesDamageEffects;
    
public:
    UWeaponHitCountEffect();
};

