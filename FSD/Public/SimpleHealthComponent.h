#pragma once
#include "CoreMinimal.h"
#include "HealthComponentBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SimpleHealthComponent.generated.h"

class UPawnStat;
class UDamageTag;
class UEnemyComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class USimpleHealthComponent : public UHealthComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_Damage, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvulnerableToNonDefinedResistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HealthBarOffsetWorld;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UEnemyComponent> EnemyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPawnStat*, float> Resistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageTag*> RequiredDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutomaticFlushNetDormancy;
    
public:
    USimpleHealthComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Damage(float oldDamage);
    
public:
    UFUNCTION(BlueprintCallable)
    float HealFromDeath(float Amount);
    
};

