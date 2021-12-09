#pragma once
#include "CoreMinimal.h"
#include "SpecialDamageAttackComponent.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "TremorAttackComponent.generated.h"

class UBoxComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class AActor;

UCLASS()
class FSD_API UTremorAttackComponent : public USpecialDamageAttackComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsAttackActive)
    bool IsAttackActive;
    
    UPROPERTY(Export, Transient)
    UBoxComponent* CollisionComponent;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* ParticlesComponent;
    
    UPROPERTY(EditAnywhere)
    float InitialParticlesDelay;
    
    UPROPERTY(EditAnywhere)
    float PostParticleDelay;
    
    UPROPERTY(EditAnywhere)
    float TargetMaxDistanceFromGround;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenDamageTicks;
    
    UPROPERTY(EditAnywhere)
    float LaunchForce;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UFUNCTION()
    void StopParticles();
    
    UFUNCTION()
    void StartParticles();
    
public:
    UFUNCTION()
    void OnTargetExitedTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnTargetEnteredTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION()
    void OnRep_IsAttackActive();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInited() const;
    
    UFUNCTION(BlueprintCallable)
    void InitTremorAttack(UBoxComponent* Box, UParticleSystemComponent* Particles);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UTremorAttackComponent();
};

