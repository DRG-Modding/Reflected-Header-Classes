#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SubObjective.h"
#include "Objective.h"
#include "IRandRange.h"
#include "RandInterval.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "RoomNode.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "FacilityObjective.generated.h"

class AActor;
class ARessuplyPod;
class AProceduralSetup;
class APawn;
class UEnemyDescriptor;
class ATetherStation;
class UResourceData;
class UEncounterManager;
class UDebrisPositioning;
class UCappedResource;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FFacilityObjectiveOnFirstEncounterDroneSpawned_Delegate, APawn*, enemy);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FFacilityObjectiveOnSecondEncounterDroneSpawned_Delegate, APawn*, enemy);

UCLASS(Abstract)
class UFacilityObjective : public UObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<ARessuplyPod> generatorClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> GeneratorBeaconClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 GeneratorCount;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ObjectivesStage)
    int32 ObjectivesStage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSubObjective> SubObjectives;
    
    UPROPERTY()
    FFacilityObjectiveOnFirstEncounterDroneSpawned_Delegate OnFirstEncounterDroneSpawned_Delegate;
    
    UPROPERTY()
    FFacilityObjectiveOnSecondEncounterDroneSpawned_Delegate OnSecondEncounterDroneSpawned_Delegate;
    
    UPROPERTY(Transient)
    TArray<APawn*> spawnedEnemies;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> TurretDescriptors;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnemyDescriptor*> GeneratorRoomTurretDescriptors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UEnemyDescriptor*> EncounterEnemies;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EncounterDifficulty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRandInterval Diversity;
    
    UPROPERTY(EditAnywhere)
    FIRandRange TurretEncountersRange;
    
    UPROPERTY(EditAnywhere)
    int32 MinimumTurretEncounters;
    
    UPROPERTY(EditAnywhere)
    FIRandRange TunnelTurretsRange;
    
    UPROPERTY(Transient)
    TArray<AActor*> SmallGenerators;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ATetherStation* mainFacility;
    
    UPROPERTY(Transient)
    TArray<int32> ShieldGeneratorRooms;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 MainFacilityRoom;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<AActor*> ShieldGenerators;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* GoalResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AmountRequired;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_AmountCollected)
    float AmountCollected;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_GeneratorsActivated)
    int32 GeneratorsActivated;
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnFacilityEncounters(AProceduralSetup* setup, UEncounterManager* Encounters, UDebrisPositioning* Positioning);
    
    UFUNCTION(BlueprintCallable)
    TArray<FTransform> SpawnEndBattleTurrets(int32 amountOfTurrets, AProceduralSetup* setup, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, const TArray<AActor*>& existingTurrets, bool& success);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMainFacility(ATetherStation* NewMainFacility);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGeneratorRooms(TArray<int32>& generatorRoomsIndicies);
    
protected:
    UFUNCTION()
    void SecondGeneratorEncounterSpawn(APawn* spawned);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void Receive_AddEnemies(AProceduralSetup* setup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ProgressCurrentObjective();
    
    UFUNCTION(BlueprintCallable)
    AActor* PlaceObjectInRoom(AProceduralSetup* setup, const FRoomNode& RoomNode, UDebrisPositioning* Positioning, TSubclassOf<AActor> placementActor);
    
    UFUNCTION()
    void OnResourceChanged(UCappedResource* Resource, float Amount);
    
protected:
    UFUNCTION()
    void OnRep_ObjectivesStage();
    
    UFUNCTION()
    void OnRep_GeneratorsActivated();
    
    UFUNCTION()
    void OnRep_AmountCollected();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCoreDeposited();
    
    UFUNCTION(BlueprintPure)
    bool IsSubObjectiveComplete(int32 objectiveIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void InitGeneratorCount(int32 generators);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetTurretGoal(AProceduralSetup* setup, const FVector& Origin, float idealRange, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, bool& success);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetShieldGenerators();
    
    UFUNCTION(BlueprintPure)
    int32 GetShieldGeneratorCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFacilityRoomIndex() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFacilityLocation() const;
    
    UFUNCTION(BlueprintPure)
    FSubObjective GetCurrentObjective() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GeneratorActivated();
    
protected:
    UFUNCTION()
    void FirstGeneratorEncounterSpawn(APawn* spawned);
    
public:
    UFUNCTION(BlueprintCallable)
    void DropOverCharger(AProceduralSetup* setup, int32 roomIndex, const FVector& facilityLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<ARessuplyPod> NewGeneratorClass);
    
    UFUNCTION()
    void ChangeObjective();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddShieldGenerator(AActor* charger, int32 roomIndex);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFacilityObjective();
};

