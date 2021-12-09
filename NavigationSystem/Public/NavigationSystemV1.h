#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine NavigationSystemBase
//CROSS-MODULE INCLUDE: Engine ENavigationQueryResult
//CROSS-MODULE INCLUDE: Engine ENavDataGatheringModeConfig
//CROSS-MODULE INCLUDE: Engine NavDataConfig
//CROSS-MODULE INCLUDE: Engine NavAgentSelector
//CROSS-MODULE INCLUDE: Engine FNavigationSystemRunMode
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "NavigationSystemV1.generated.h"

class UNavArea;
class ANavigationData;
class AActor;
class UCrowdManagerBase;
class AController;
class UObject;
class UNavigationQueryFilter;
class ANavMeshBoundsVolume;
class UNavigationSystemV1;
class UNavigationPath;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNavigationSystemV1OnNavDataRegisteredEvent, ANavigationData*, NavData);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNavigationSystemV1OnNavigationGenerationFinishedDelegate, ANavigationData*, NavData);

UCLASS(BlueprintType, NonTransient, Within=World)
class NAVIGATIONSYSTEM_API UNavigationSystemV1 : public UNavigationSystemBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ANavigationData* MainNavData;
    
    UPROPERTY(Transient)
    ANavigationData* AbstractNavData;
    
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FName DefaultAgentName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UCrowdManagerBase> CrowdManagerClass;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bAutoCreateNavigationData: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSpawnNavDataInNavBoundsLevel: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bAllowClientSideNavigation: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bShouldDiscardSubLevelNavData: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bTickWhilePaused: 1;
    
    UPROPERTY()
    uint8 bSupportRebuilding: 1;
    
public:
    UPROPERTY(Config, EditAnywhere)
    uint8 bInitialBuildingLocked: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSkipAgentHeightCheckWhenPickingNavData: 1;
    
protected:
    UPROPERTY(Config, EditDefaultsOnly)
    ENavDataGatheringModeConfig DataGatheringMode;
    
    UPROPERTY(Config, EditDefaultsOnly)
    uint8 bGenerateNavigationOnlyAroundNavigationInvokers: 1;
    
    UPROPERTY(Config, EditAnywhere)
    float ActiveTilesUpdateInterval;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FNavDataConfig> SupportedAgents;
    
    UPROPERTY(Config, EditAnywhere)
    FNavAgentSelector SupportedAgentsMask;
    
public:
    UPROPERTY()
    TArray<ANavigationData*> NavDataSet;
    
    UPROPERTY(Transient)
    TArray<ANavigationData*> NavDataRegistrationQueue;
    
    UPROPERTY(Transient)
    FNavigationSystemV1OnNavDataRegisteredEvent OnNavDataRegisteredEvent;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FNavigationSystemV1OnNavigationGenerationFinishedDelegate OnNavigationGenerationFinishedDelegate;
    
protected:
    UPROPERTY()
    FNavigationSystemRunMode OperationMode;
    
public:
    UPROPERTY(Config, EditAnywhere)
    float DirtyAreasUpdateFreq;
    
    UFUNCTION(BlueprintCallable)
    void UnregisterNavigationInvoker(AActor* Invoker);
    
    UFUNCTION(BlueprintCallable)
    static void SimpleMoveToLocation(AController* Controller, const FVector& Goal);
    
    UFUNCTION(BlueprintCallable)
    static void SimpleMoveToActor(AController* Controller, const AActor* Goal);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs);
    
    UFUNCTION(BlueprintCallable)
    void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);
    
    UFUNCTION(BlueprintCallable)
    void ResetMaxSimultaneousTileGenerationJobsCount();
    
    UFUNCTION(BlueprintCallable)
    void RegisterNavigationInvoker(AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
    
    UFUNCTION(BlueprintPure)
    static FVector ProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    
    UFUNCTION(BlueprintCallable)
    void OnNavigationBoundsUpdated(ANavMeshBoundsVolume* NavVolume);
    
    UFUNCTION(BlueprintCallable)
    static bool NavigationRaycast(UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, AController* Querier);
    
    UFUNCTION(BlueprintCallable)
    bool K2_ReplaceAreaInOctreeData(const UObject* Object, TSubclassOf<UNavArea> OldArea, TSubclassOf<UNavArea> NewArea);
    
    UFUNCTION(BlueprintPure)
    static bool K2_ProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    
    UFUNCTION(BlueprintPure)
    static bool K2_GetRandomReachablePointInRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintPure)
    static bool K2_GetRandomPointInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_GetRandomLocationInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintPure)
    static bool IsNavigationBeingBuiltOrLocked(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsNavigationBeingBuilt(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FVector GetRandomReachablePointInRadius(UObject* WorldContextObject, const FVector& Origin, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintPure)
    static FVector GetRandomPointInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<ENavigationQueryResult::Type> GetPathLength(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathLength, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<ENavigationQueryResult::Type> GetPathCost(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathCost, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintPure)
    static UNavigationSystemV1* GetNavigationSystem(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UNavigationPath* FindPathToLocationSynchronously(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable)
    static UNavigationPath* FindPathToActorSynchronously(UObject* WorldContextObject, const FVector& PathStart, AActor* GoalActor, float TetherDistance, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UNavigationSystemV1();
};

