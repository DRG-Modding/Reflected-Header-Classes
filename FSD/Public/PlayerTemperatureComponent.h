#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TemperatureComponent.h"
#include "EPlayerTemperatureState.h"
#include "PlayerTemperatureComponent.generated.h"

class UHealthComponentBase;
class APlayerCharacter;
class UStatusEffect;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerTemperatureComponentOnTemperatureChanged, float, Temperature, float, Change);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerTemperatureComponentOnTemperatureStateChanged, EPlayerTemperatureState, State);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerTemperatureComponentOnTemperatureChangeRate, int32, ChangeRate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerTemperatureComponentOnBarVisibilityChanged, bool, barVisible);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerTemperatureComponentOnDefrosting, float, Progress);

UCLASS()
class UPlayerTemperatureComponent : public UTemperatureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayerTemperatureComponentOnTemperatureChanged OnTemperatureChanged;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerTemperatureComponentOnTemperatureStateChanged OnTemperatureStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerTemperatureComponentOnTemperatureChangeRate OnTemperatureChangeRate;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerTemperatureComponentOnDefrosting OnDefrosting;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerTemperatureComponentOnBarVisibilityChanged OnBarVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumTemperature;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaximumTemperature;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefrostTemperature;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BurnTemperature;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DouseFireTemperature;
    
    UPROPERTY(EditAnywhere)
    float TemperaturRegainSpeed;
    
    UPROPERTY(EditAnywhere)
    float DefrostingRequired;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> OnDefrostedStatusEffect;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float NormalTemperature;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CurrentTemperature)
    float CurrentTemperature;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float TargetTemperature;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TemperatureChangeSpeed)
    int8 TemperatureChangeSpeed;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DefrostProgress)
    float DefrostProgress;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool barVisible;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_TemperatureState)
    EPlayerTemperatureState TemperatureState;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNormalTemperature();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetFrozenTemperature();
    
protected:
    UFUNCTION()
    void OnRep_TemperatureState(EPlayerTemperatureState oldState);
    
    UFUNCTION()
    void OnRep_TemperatureChangeSpeed(int8 OldSpeed);
    
    UFUNCTION()
    void OnRep_DefrostProgress();
    
    UFUNCTION()
    void OnRep_CurrentTemperature(float OldTemperature);
    
    UFUNCTION()
    void OnDeath(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintPure)
    int32 GetTemperatureChangedSpeed() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetDefrostProgress() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentTemperatureNormalized() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Defrost(float Amount);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPlayerTemperatureComponent();
};

