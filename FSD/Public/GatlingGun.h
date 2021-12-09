#pragma once
#include "CoreMinimal.h"
#include "BeltDrivenWeapon.h"
#include "GatlingGun.generated.h"

class UFXSystemAsset;
class UDamageComponent;
class AActor;
class UFSDPhysicalMaterial;

UCLASS()
class AGatlingGun : public ABeltDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool BarrelProximityDamageEnabled;
    
    UPROPERTY(EditAnywhere)
    float BarrelProximityDamageDistance;
    
    UPROPERTY(EditAnywhere)
    float BarrelProximityDamageRadius;
    
    UPROPERTY(EditAnywhere)
    float BarrelProximityDamageLength;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenProximityDamageTicks;
    
    UPROPERTY(EditAnywhere)
    float DamageMultiplierAtMaxStabilization;
    
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* HotShellsTracerParticles;
    
    UPROPERTY(EditAnywhere)
    float HeatRemovedOnKill;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool CriticalOverheatEnabled;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HotShellsTracerOn)
    bool HotShellsOn;
    
    UPROPERTY(EditAnywhere)
    float HotShellsTemperatureRequired;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDamageComponent* BarrelProximityDamageComponent;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetHotShellsOn(bool hotShellsIsOn);
    
    UFUNCTION()
    void OnRep_HotShellsTracerOn();
    
    UFUNCTION()
    void OnGatlingTemperatureChanged(float Temperature, bool isOverheated);
    
    UFUNCTION()
    void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
    
    UFUNCTION(Client, Reliable)
    void Client_RemoveHeat();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGatlingGun();
};

