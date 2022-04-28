#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "EventParticipant.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "TowerEventModule.generated.h"

class UWeakpointGlowComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UParticleSystemComponent;
class UEnemyHealthComponent;
class UArmorHealthDamageComponent;
class USkeletalMesh;
class USoundCue;
class UParticleSystem;
class ATowerEventModule;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class FSD_API ATowerEventModule : public AFSDPawn, public IEventParticipant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArmorHealthDamageComponent* ArmorDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWeakpointGlowComponent* WeakpointGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SmokeParticles;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator MainBodyRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* DestroyedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ExplosionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExplosionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ATowerEventModule* PreviousModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ATowerEventModule* NextModule;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ArmorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArmorPieces;
    
    UPROPERTY(EditAnywhere)
    float ArmorLifetime;
    
    UPROPERTY(EditAnywhere)
    float ArmorPopForce;
    
    UPROPERTY(EditAnywhere)
    float ArmorShedDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> ArmorMeshes;
    
public:
    ATowerEventModule();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttack();
    
    UFUNCTION(BlueprintCallable)
    void HideArmorPlates();
    
    UFUNCTION(BlueprintCallable)
    void DestroyArmor();
    
    
    // Fix for true pure virtual functions not being implemented
};

