#pragma once
#include "CoreMinimal.h"
#include "GuntowerModule.h"
#include "WeaponFireOwner.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "HostileGuntowerModule.generated.h"

class USkeletalMeshComponent;
class UParticleSystemComponent;
class UEnemyComponent;
class UHealthComponentBase;

UCLASS()
class AHostileGuntowerModule : public AGuntowerModule, public IWeaponFireOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* DestroyedMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* DestroyedSmoke;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ModuleMaxHealth)
    float ModuleMaxHealth;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FRotator CurrentAimRotation;
    
    UFUNCTION()
    void OnWeakpointDied(UHealthComponentBase* Health);
    
    UFUNCTION()
    void OnRep_ModuleMaxHealth();
    
    UFUNCTION()
    void OnModuleDied(UHealthComponentBase* Health);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AHostileGuntowerModule();
};
