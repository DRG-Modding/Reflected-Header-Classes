#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoDrivenWeapon.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "AutoCannon.generated.h"

class UAnimMontage;
class UStatusEffect;

UCLASS(Abstract)
class AAutoCannon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float StartingFireRate;
    
    UPROPERTY(EditAnywhere)
    float MaxFireRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve FireRateCurve;
    
    UPROPERTY(EditAnywhere)
    float FireTimeReductionScale;
    
    UPROPERTY(EditAnywhere)
    float FireTimeIncreaseScale;
    
    UPROPERTY(EditAnywhere)
    float MaxFireTimeCap;
    
    UPROPERTY(EditAnywhere)
    float DamageBonusAtFullROF;
    
    UPROPERTY(EditAnywhere)
    bool StatusEffectAtFullROF;
    
    UPROPERTY(EditAnywhere)
    float FireTimeOffsetForMaxRateOfFireBonus;
    
    UPROPERTY(EditAnywhere)
    float StartLoopingSoundAt;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> StatusAtFullROF;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Fire_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CurrentFireTime;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetStatusActive(bool IsActive);
    
public:
    AAutoCannon();
};

