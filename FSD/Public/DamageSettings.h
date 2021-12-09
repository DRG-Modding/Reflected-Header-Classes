#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "DecalData.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "DamageSettings.generated.h"

class UDamageComponent;
class UStatusEffect;
class UNiagaraSystem;
class UDamageTag;
class USoundCue;

UCLASS()
class UDamageSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TemperatureChangePerColdDamagePoint;
    
    UPROPERTY(EditAnywhere)
    float TemperatureChangePerIceDamagePoint;
    
    UPROPERTY(EditAnywhere)
    float TemperatureChangePerHeatDamagePoint;
    
    UPROPERTY(EditAnywhere)
    float TemperatureChangePerFireDamagePoint;
    
    UPROPERTY(EditAnywhere)
    float TemperatureShockActivationWindow;
    
    UPROPERTY(EditAnywhere)
    float FrozenDamageBonus;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> EnemyOnFireStatusEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> PlayerOnFireStatusEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> TemperatureShockFromFrozenStatusEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> TemperatureShockFromBurningStatusEffect;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDamageComponent* ArmorShatterDamage;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* ArmorShatterEmitter;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ArmorShatterSound;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FDecalData> ImpactDecals;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ArmorToArmorDamageBreakingCurve;
    
    UPROPERTY(EditAnywhere)
    UDamageTag* DetonateFrozen;
    
    UPROPERTY(EditAnywhere)
    UDamageTag* DetonateOnFire;
    
    UPROPERTY(EditAnywhere)
    UDamageTag* DirectHit;
    
    UPROPERTY(EditAnywhere)
    UDamageTag* MeltTarget;
    
    UPROPERTY(EditAnywhere)
    UDamageTag* IgnoreBodypartDamageReduction;
    
    UDamageSettings();
};

