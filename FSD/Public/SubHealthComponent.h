#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EEnemyHealthScaling.h"
#include "EHealthbarType.h"
#include "Health.h"
#include "SubHealthComponent.generated.h"

class USubHealthComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubHealthComponentOnCanTakeDamageChanged, USubHealthComponent*, subHealth);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubHealthComponentOnHealthChanged, float, Health);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubHealthComponentOnDamageTaken, float, Amount);

UCLASS(Abstract, BlueprintType)
class USubHealthComponent : public UActorComponent, public IHealth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSubHealthComponentOnDamageTaken OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable)
    FSubHealthComponentOnHealthChanged OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSubHealthComponentOnCanTakeDamageChanged OnCanTakeDamageChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    EHealthbarType HealthbarType;
    
    UPROPERTY(EditAnywhere)
    EEnemyHealthScaling EnemyHealthScaling;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCanTakeDamage(bool canTakeDamage);
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealthPct() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCanTakeDamage() const;
    
    USubHealthComponent();
};

