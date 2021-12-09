#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PawnAfflictionItem.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "AfflictionEntriesArray.h"
#include "EFrozenBitsSize.h"
#include "PawnAfflictionComponent.generated.h"

class UHealthComponentBase;
class UPawnAffliction;
class UFrozenAfflictionEffect;
class UBurningAfflictionEffect;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnAfflictionComponentOnAfflictionActivatedEvent, UPawnAffliction*, Affliction);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnAfflictionComponentOnAfflictionDeactivatedEvent, UPawnAffliction*, Affliction);

UCLASS(BlueprintType)
class UPawnAfflictionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPawnAfflictionComponentOnAfflictionActivatedEvent OnAfflictionActivatedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FPawnAfflictionComponentOnAfflictionDeactivatedEvent OnAfflictionDeactivatedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<UPawnAffliction*, FPawnAfflictionItem> ActiveAfflictions;
    
    UPROPERTY(Replicated, Transient)
    FAfflictionEntriesArray NetworkedAfflictions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UFrozenAfflictionEffect> FrozenEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBurningAfflictionEffect> BurningEffect;
    
    UPROPERTY(EditAnywhere)
    EFrozenBitsSize EffectSize;
    
    UPROPERTY(EditAnywhere)
    float BaseEffectScale;
    
    UPROPERTY(EditAnywhere)
    bool UseDormancy;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PushAffliction(UPawnAffliction* Affliction, bool onlyIfNotActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PopAffliction(UPawnAffliction* Affliction);
    
protected:
    UFUNCTION()
    void OnDeath(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAfflictedBy(UPawnAffliction* Affliction) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPawnAffliction*> GetActiveAfflictions() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPawnAfflictionComponent();
};

