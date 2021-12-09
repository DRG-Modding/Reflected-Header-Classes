#pragma once
#include "CoreMinimal.h"
#include "TemperatureComponent.h"
#include "EnemyTemperatureComponent.generated.h"

class UFSDPhysicalMaterial;
class UDamageClass;
class UPawnStatsComponent;
class AController;
class UEnemyDetonationSetting;
class UHealthComponent;
class AActor;
class UDamageTag;
class UStatusEffectsComponent;

UCLASS()
class UEnemyTemperatureComponent : public UTemperatureComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float UpdateTime;
    
    UPROPERTY(EditAnywhere)
    bool DieIfFrozen;
    
    UPROPERTY(EditAnywhere)
    bool DieIfBurning;
    
    UPROPERTY(EditAnywhere)
    float TemperatureChangeScale;
    
    UPROPERTY(EditAnywhere)
    float BurnTemperature;
    
    UPROPERTY(EditAnywhere)
    float DouseFireTemperature;
    
    UPROPERTY(EditAnywhere)
    float FreezeTemperature;
    
    UPROPERTY(EditAnywhere)
    float UnFreezeTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WarmingRate;
    
    UPROPERTY(EditAnywhere)
    int32 CoolingRate;
    
    UPROPERTY(EditAnywhere)
    bool IsHeatsourceWhenOnFire;
    
    UPROPERTY(EditAnywhere)
    float OnFireHeatRange;
    
    UPROPERTY(EditAnywhere)
    float MaxColdSlowdown;
    
    UPROPERTY(EditAnywhere)
    UEnemyDetonationSetting* DetonationSetting;
    
    UPROPERTY(Export, Transient)
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(EditAnywhere)
    int32 WarmingCooldown;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 FireDetonationStack;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 IceDetonationStack;
    
    UFUNCTION()
    void TimerCallback();
    
    UFUNCTION()
    void OnDeath(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<UDamageTag*>& Tags);
    
    UFUNCTION()
    void DoTemperatureShock(UStatusEffectsComponent* Status);
    
    UFUNCTION(NetMulticast, Reliable)
    void All_IceDetonation();
    
    UFUNCTION(NetMulticast, Reliable)
    void All_FireDetonation();
    
public:
    UEnemyTemperatureComponent();
};

