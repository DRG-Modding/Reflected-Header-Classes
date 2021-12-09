#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "EventParticipant.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "GuntowerModule.generated.h"

class USoundCue;
class AActor;
class UParticleSystem;
class UAnimSequenceBase;
class UStaticMeshComponent;
class USkeletalMeshComponent;
class UGunTowerHealthComponent;
class AGuntowerEvent;
class AGuntowerModule;

UCLASS()
class AGuntowerModule : public AFSDPawn, public IEventParticipant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* ExposeWeakpointSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* deathSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* deathParticles;
    
    UPROPERTY(Transient)
    TArray<AActor*> WeakpointActors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BodyBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName TopConnectionPointName;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    FRotator CurrentTurretRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequenceBase* IntroductionAnimation;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* ArmorPiece1;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* ArmorPiece2;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* ArmorPiece3;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* ModuleMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGunTowerHealthComponent* GuntowerModuleHealth;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AGuntowerEvent* OwningEvent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AGuntowerModule* ChildModule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WeakpointsExposedTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WeakpointsExposedTimeSolo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HideArmorTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ArmorShootoutDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ArmorLaunchPower;
    
    UPROPERTY(Replicated, Transient)
    int32 ModuleID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsPassiveModule;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsModuleActive)
    bool ModuleIsActive;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AreWeakpointExposed)
    bool AreWeakpointsExposed;
    
    UPROPERTY(Replicated, Transient)
    bool AreWeaponsExposed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ConstantRotation;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsArmorOff)
    bool IsArmorOff;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Exploded)
    bool Exploded;
    
public:
    UFUNCTION(BlueprintCallable)
    void ShootOutArmor();
    
protected:
    UFUNCTION()
    void SetModuleActive();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTearArmor();
    
protected:
    UFUNCTION()
    void OnRep_IsModuleActive();
    
    UFUNCTION()
    void OnRep_IsArmorOff();
    
    UFUNCTION()
    void OnRep_Exploded();
    
    UFUNCTION()
    void OnRep_AreWeakpointExposed();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivationChanged(bool IsActivated);
    
    UFUNCTION()
    void Introduce();
    
protected:
    UFUNCTION()
    void HideWeakpoints();
    
    UFUNCTION()
    void HideArmor();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetModuleID() const;
    
protected:
    UFUNCTION()
    void DoExplosion();
    
public:
    UFUNCTION()
    void DeactivateTowerModule();
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_PlayIntroductionAnim();
    
    UFUNCTION()
    void ActivateTowerModule();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGuntowerModule();
};

