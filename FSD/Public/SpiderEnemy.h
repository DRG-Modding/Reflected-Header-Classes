#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "EnemyAttacker.h"
#include "SpiderEnemy.generated.h"

class UAnimSequenceBase;
class UPawnStatsComponent;
class UStaticMeshComponent;
class UStaticMesh;

UCLASS()
class ASpiderEnemy : public AEnemyDeepPathfinderCharacter, public IEnemyAttacker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimSequenceBase*> HitReactions;
    
    UPROPERTY(EditAnywhere)
    float FirstHitReactBlendIn;
    
    UPROPERTY(EditAnywhere)
    float OverrideHitReactBlendIn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* GoreMesh;
    
    UPROPERTY(EditAnywhere)
    bool ApplyDifficultySpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float AttackDamageModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool LimitRagdollSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxRagdollSpeed;
    
    UFUNCTION()
    void PlayHitReaction();
    
    UFUNCTION()
    void OnDamaged(float Damage);
    
    UFUNCTION(BlueprintCallable)
    UStaticMeshComponent* CreateHeadGore();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AlertNearbyEnemies();
    
public:
    ASpiderEnemy();
};

