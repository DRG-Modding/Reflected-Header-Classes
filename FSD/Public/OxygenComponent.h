#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "OxygenCallback.h"
#include "OxygenComponent.generated.h"

class UHealthComponentBase;
class UStatusEffect;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOxygenComponentOnOxygenChanged, int32, oxygenLevel);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOxygenComponentOnOxygenReplenishingEvent, bool, IsActive);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FOxygenComponentOxygenCallback);

UCLASS(BlueprintType)
class UOxygenComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOxygenComponentOnOxygenChanged OnOxygenChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOxygenComponentOnOxygenReplenishingEvent OnOxygenReplenishingEvent;
    
protected:
    UPROPERTY(EditAnywhere)
    float OxygenGivenOnRevive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CurrentOxygen;
    
    UPROPERTY(EditAnywhere)
    float OxygenReplinishmentRate;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_NetworkedOxygen)
    int32 NetworkedOxygen;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsReplenishingOxygen)
    bool IsReplenishingOxygen;
    
    UPROPERTY(EditAnywhere)
    float OxygenDepletionPersecond;
    
    UPROPERTY(Transient)
    TArray<FOxygenCallback> Callbacks;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> NoOxygenStatusEffect;
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterOxygenEvent(FOxygenComponentOxygenCallback OxygenCallback, float oxygenLevel, bool triggerOnOxygenLoss);
    
protected:
    UFUNCTION()
    void OnRevived();
    
    UFUNCTION()
    void OnRep_NetworkedOxygen(int32 OldValue);
    
    UFUNCTION()
    void OnRep_IsReplenishingOxygen();
    
    UFUNCTION()
    void OnDeath(UHealthComponentBase* HealthComponent);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UOxygenComponent();
};

