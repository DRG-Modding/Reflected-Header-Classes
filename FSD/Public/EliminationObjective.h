#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "EliminationTarget.h"
#include "EliminationDescriptors.h"
#include "EliminationObjective.generated.h"

class UCaveInfluencer;
class AActor;
class AFSDPawn;
class UDebrisPositioning;
class UDebrisBase;
class UHealthComponentBase;
class UEnemyDescriptor;

UCLASS(Abstract)
class UEliminationObjective : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ObjectCount;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> ExcludeRoomIDs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> ObjectToSpawn;
    
    UPROPERTY(EditAnywhere)
    UCaveInfluencer* CaveInfluencer;
    
    UPROPERTY(EditAnywhere)
    float DebrisRadius;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UDebrisBase>> ObjectDebris;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_EnemiesKilled)
    int32 EnemiesKilled;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_EnemiesToKill)
    int32 EnemiesToKill;
    
    UPROPERTY(EditAnywhere)
    TArray<FEliminationDescriptors> TargetDescriptors;
    
    UPROPERTY(Transient)
    TArray<FEliminationDescriptors> TargetQueue;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FEliminationTarget> ActiveEliminationTargets;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterEliminationTargets(const TArray<AFSDPawn*>& Targets);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTargetSpawned();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTargetKilled();
    
    UFUNCTION()
    void OnTargetKilled(UHealthComponentBase* Health);
    
    UFUNCTION()
    void OnRep_EnemiesToKill(int32 prevAmount);
    
    UFUNCTION()
    void OnRep_EnemiesKilled(int32 prevAmount);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    TArray<UEnemyDescriptor*> GetNextTargetInQueue();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UEliminationObjective();
};

