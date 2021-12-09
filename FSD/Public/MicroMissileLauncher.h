#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "EMicroMissileLauncherFireMode.h"
#include "MicroMissileLauncher.generated.h"

class USoundCue;
class UAnimMontage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMicroMissileLauncherOnStartCharging);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMicroMissileLauncherOnEndCharging);

UCLASS(Abstract)
class AMicroMissileLauncher : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMicroMissileLauncherOnStartCharging OnStartCharging;
    
    UPROPERTY(BlueprintAssignable)
    FMicroMissileLauncherOnEndCharging OnEndCharging;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FName> MuzzleNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChargeMaxFireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BuckShotDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShotDirectionHorizontalDegreeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShotDirectionVerticleDegreeOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMicroMissileLauncherFireMode FireMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DisableHomingOnRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxHomingProjectiles;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Fire_Empty_Mag;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Fire_Level2;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Fire_Level2_Empty_Mag;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Fire_Level3;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Fire_Level3_Empty_Mag;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Mag_Feed;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* WPN_Mag_And_Barrel_Feed;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ChargedMissileFireSound;
    
    UFUNCTION(Reliable, Server)
    void Server_SetIsCharging(bool isCharging);
    
    UFUNCTION(Reliable, Server)
    void Server_SetChargedMissile(bool isCharged);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsNextShotBuckShot();
    
    UFUNCTION(BlueprintPure)
    int32 GetChargeCurrentFireCount();
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void All_SetChargedMissile(bool isCharged);
    
public:
    AMicroMissileLauncher();
};

