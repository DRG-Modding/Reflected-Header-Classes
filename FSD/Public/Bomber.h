#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AFlyingBug.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Bomber.generated.h"

class UParticleSystem;
class UAudioComponent;
class USoundBase;
class UParticleSystemComponent;
class AProjectile;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ABomber : public AAFlyingBug {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* GooSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AcidEmitterLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AcidEmitterRight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> AcidProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* deathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* deathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DeathPanicSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BleedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BladderDestroyedNoise;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UParticleSystemComponent> BleedParticlesComponent;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UAudioComponent> PanicAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollForceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathYRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathXRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewPointMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewPointMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcidRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostDeathAcidTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Death, meta=(AllowPrivateAccess=true))
    bool HasDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsRightDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsLeftDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DropAcid, meta=(AllowPrivateAccess=true))
    bool dropAcid;
    
public:
    ABomber();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopSpinAndDie();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDropAcid(bool NewDropAcid);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDeathPanic();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DropAcid();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Death();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRagdollHitGround(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBladderDamage(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnArmorDestroyed(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void HideMesh();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDropAcid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreBladdersDestroyed() const;
    
};

