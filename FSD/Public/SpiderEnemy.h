#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "EnemyAttacker.h"
#include "SpiderEnemy.generated.h"

class UStaticMeshComponent;
class UStaticMesh;
class UHitReactionComponent;
class UPawnStatsComponent;
class AActor;

UCLASS()
class ASpiderEnemy : public AEnemyDeepPathfinderCharacter, public IEnemyAttacker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UHitReactionComponent* HitReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* GoreMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyDifficultySpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LimitRagdollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRagdollSpeed;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_LookAtTarget, meta=(AllowPrivateAccess=true))
    AActor* LookAtTarget;
    
public:
    ASpiderEnemy();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtTarget(AActor* Target);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LookAtTarget();
    
    UFUNCTION(BlueprintCallable)
    UStaticMeshComponent* CreateHeadGore();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AlertNearbyEnemies();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    float GetAttackDamageModifier() const override PURE_VIRTUAL(GetAttackDamageModifier, return 0.0f;);
    
};

