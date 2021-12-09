#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "Objective.h"
#include "ERefineryState.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RefineryObjective.generated.h"

class AActor;
class AFSDRefinery;
class AProceduralSetup;
class UDebrisPositioning;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRefineryObjectiveOnRefinerySpawned, AFSDRefinery*, InRefinery);

UCLASS(Abstract)
class URefineryObjective : public UObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRefineryObjectiveOnRefinerySpawned OnRefinerySpawned;
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AFSDRefinery> refineryClass;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Refinery)
    TWeakObjectPtr<AFSDRefinery> Refinery;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ERefineryState RefineryState;
    
    UPROPERTY(EditAnywhere)
    UDebrisPositioning* RefineryPlacement;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> RawMaterialClass;
    
    UPROPERTY(EditAnywhere)
    UDebrisPositioning* RawMaterialPlacement;
    
    UPROPERTY(EditAnywhere)
    int32 RawMaterialCount;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bMissionCompleted;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsFinalBattle;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 OptionalTunnelRoomID;
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnWells(AProceduralSetup* setup, const FVector& rigLocation, float minDistanceBetween, const TArray<FVector2D>& minMaxDistancesToRig);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveRefinerySpawned(AFSDRefinery* InRefinery);
    
    UFUNCTION()
    void OnRep_Refinery();
    
    UFUNCTION()
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetRefinerySpawnLocation(TSubclassOf<AFSDRefinery> NewRefineryClass);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void AddMissionCriticalItems(AProceduralSetup* setup);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    URefineryObjective();
};

