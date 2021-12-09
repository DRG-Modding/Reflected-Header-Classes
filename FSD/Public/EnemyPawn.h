#pragma once
#include "CoreMinimal.h"
#include "QueuedMontage.h"
#include "FSDPawn.h"
#include "NetMontageAble.h"
#include "EnemyPawn.generated.h"

class UEnemyHealthComponent;
class UEnemyPawnAfflictionComponent;
class UPawnStatsComponent;
class UEnemyComponent;
class UMaterialInterface;
class UMeshComponent;
class USkeletalMeshComponent;

UCLASS(Abstract)
class AEnemyPawn : public AFSDPawn, public INetMontageAble {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyHealthComponent* Health;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnStatsComponent* Stats;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyPawnAfflictionComponent* Affliction;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyComponent* enemy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CenterMassSocketName;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_QueuedMontage)
    FQueuedMontage QueuedMontage;
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> CachedMaterials;
    
    UFUNCTION(BlueprintImplementableEvent)
    UMeshComponent* Receive_GetMeshComponent() const;
    
    UFUNCTION()
    void OnRep_QueuedMontage();
    
    UFUNCTION(BlueprintImplementableEvent)
    USkeletalMeshComponent* GetMesh() const;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AEnemyPawn();
};

