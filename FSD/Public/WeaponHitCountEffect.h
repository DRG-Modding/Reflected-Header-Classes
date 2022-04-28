#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WeaponHitCountEffect.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UWeaponHitCountEffect : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsesDamageEffects;
    
public:
    UWeaponHitCountEffect();
};

