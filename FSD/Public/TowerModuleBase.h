#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "EventParticipant.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "EGuntowerModuleState.h"
#include "TowerModuleBase.generated.h"

class USkeletalMesh;
class USceneComponent;
class UStaticMeshComponent;
class USkeletalMeshComponent;
class UEnemyHealthComponent;
class USoundCue;
class UParticleSystem;

UCLASS()
class ATowerModuleBase : public AFSDPawn, public IEventParticipant {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(Export, VisibleAnywhere)
    USkeletalMeshComponent* ModuleMesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<UStaticMeshComponent*> ArmorPlates;
    
    UPROPERTY(Export, VisibleAnywhere)
    UEnemyHealthComponent* Health;
    
protected:
    UPROPERTY(Replicated, Transient)
    FRotator ModuleRotation;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* DestroyedMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* deathSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* deathParticles;
    
    UPROPERTY(EditAnywhere)
    float ArmorLaunchPower;
    
    UPROPERTY(EditAnywhere)
    float HideArmorTime;
    
    UPROPERTY(EditAnywhere)
    float ModuleRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    bool ConstantRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    EGuntowerModuleState State;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(EGuntowerModuleState NewState);
    
protected:
    UFUNCTION()
    void OnRep_State(EGuntowerModuleState prevState);
    
private:
    UFUNCTION()
    void HideArmorPlates();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DoAttack();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATowerModuleBase();
};

