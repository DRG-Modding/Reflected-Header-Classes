#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EnemyTemperatureReplicatorComponent.generated.h"

class UEnemyTemperatureComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyTemperatureReplicatorComponentOnIsOnFireChanged, float, FloatValue);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyTemperatureReplicatorComponentOnTemperatureEffectChanged, float, FloatValue);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyTemperatureReplicatorComponentOnIsFrozenChanged, float, FloatValue);

UCLASS(BlueprintType)
class UEnemyTemperatureReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnemyTemperatureReplicatorComponentOnTemperatureEffectChanged OnTemperatureEffectChanged;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyTemperatureReplicatorComponentOnIsFrozenChanged OnIsFrozenChanged;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyTemperatureReplicatorComponentOnIsOnFireChanged OnIsOnFireChanged;
    
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UEnemyTemperatureComponent> EnemyTemperatureComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TemperatureEffect)
    int32 TemperatureEffect;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsFrozen)
    bool bIsFrozen;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsOnFire)
    bool bIsOnFire;
    
    UFUNCTION()
    void OnRep_TemperatureEffect();
    
    UFUNCTION()
    void OnRep_IsOnFire();
    
    UFUNCTION()
    void OnRep_IsFrozen();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOnFire() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFrozen() const;
    
    UFUNCTION(BlueprintPure)
    float GetTemperatureEffect() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UEnemyTemperatureReplicatorComponent();
};

