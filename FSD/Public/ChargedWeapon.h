#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "ChargeChangedSignatureDelegate.h"
#include "ChargedWeapon.generated.h"

class UFXSystemComponent;
class UAnimMontage;
class UFXSystemAsset;
class USoundCue;

UCLASS(Abstract, Blueprintable)
class AChargedWeapon : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargeChangedSignature OnChargeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChargeChangedSignature OnHeatChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_OverheatAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* WeaponOverheatAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_ChargeupMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_ChargeupMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ChargeupParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* ChargeupParticleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ChargeupFireMuzzleFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* NormalFiresound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FullyChargedFireSound;
    
    UPROPERTY(EditAnywhere)
    float ChargeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Charging, meta=(AllowPrivateAccess=true))
    bool Charging;
    
    UPROPERTY(EditAnywhere, Transient)
    float ChargeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotCostAtBelowFullCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotCostAtFullCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChargedShotsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoFireWhenOverheated;
    
    UPROPERTY(EditAnywhere, Transient)
    float TotalHeat;
    
    UPROPERTY(EditAnywhere)
    float CoolingRate;
    
    UPROPERTY(EditAnywhere)
    float HeatPerSecondWhileCharging;
    
    UPROPERTY(EditAnywhere)
    float HeatPerSecondWhenCharged;
    
    UPROPERTY(EditAnywhere)
    float HeatPerNormalShot;
    
    UPROPERTY(EditAnywhere)
    float HeatPerChargedShot;
    
public:
    AChargedWeapon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetOverheated(bool isOverheated);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetIsCharging(bool isCharging);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RecieveStoppedCharging(float NewChargeProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveStartedCharging();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void RecieveChargeProgressChanged(float NewChargeProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOverheatedChanged(bool isOverheated);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Charging();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCharging() const;
    
};

