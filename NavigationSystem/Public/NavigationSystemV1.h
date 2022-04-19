#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavAgentSelector -FallbackName=NavAgentSelector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationSystemBase -FallbackName=NavigationSystemBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavDataConfig -FallbackName=NavDataConfig
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FNavigationSystemRunMode -FallbackName=FNavigationSystemRunMode
#include "OnNavDataGenericEventDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENavDataGatheringModeConfig -FallbackName=ENavDataGatheringModeConfig
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENavigationQueryResult -FallbackName=ENavigationQueryResult
#include "NavigationSystemV1.generated.h"

class ANavigationData;
class UCrowdManagerBase;
class UObject;
class UNavigationQueryFilter;
class AController;
class AActor;
class ANavMeshBoundsVolume;
class UNavArea;
class UNavigationSystemV1;
class UNavigationPath;

UCLASS(BlueprintType, NonTransient, Within=World)
class NAVIGATIONSYSTEM_API UNavigationSystemV1 : public UNavigationSystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ANavigationData* MainNavData;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ANavigationData* AbstractNavData;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultAgentName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCrowdManagerBase> CrowdManagerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoCreateNavigationData: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnNavDataInNavBoundsLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowClientSideNavigation: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldDiscardSubLevelNavData: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTickWhilePaused: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bSupportRebuilding: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInitialBuildingLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipAgentHeightCheckWhenPickingNavData: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bGenerateNavigationOnlyAroundNavigationInvokers: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveTilesUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    ENavDataGatheringModeConfig DataGatheringMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirtyAreaWarningSizeThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavDataConfig> SupportedAgents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAgentSelector SupportedAgentsMask;
    
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<ANavigationData*> NavDataSet;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<ANavigationData*> NavDataRegistrationQueue;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FOnNavDataGenericEvent OnNavDataRegisteredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FOnNavDataGenericEvent OnNavigationGenerationFinishedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNavigationSystemRunMode OperationMode;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirtyAreasUpdateFreq;
    
    UNavigationSystemV1();
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    
    UFUNCTION(BlueprintCallable)
    void OnNavigationBoundsUpdated(ANavMeshBoundsVolume* NavVolume);
    
    UFUNCTION(BlueprintCallable)
    static bool NavigationRaycast(UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, AController* Querier);
    
    UFUNCTION(BlueprintCallable)
    bool K2_ReplaceAreaInOctreeData(const UObject* Object, TSubclassOf<UNavArea> OldArea, TSubclassOf<UNavArea> NewArea);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_ProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_GetRandomReachablePointInRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_GetRandomPointInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_GetRandomLocationInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNavigationBeingBuiltOrLocked(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNavigationBeingBuilt(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRandomReachablePointInRadius(UObject* WorldContextObject, const FVector& Origin, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRandomPointInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ENavigationQueryResult::Type> GetPathLength(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathLength, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ENavigationQueryResult::Type> GetPathCost(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathCost, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UNavigationSystemV1* GetNavigationSystem(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UNavigationPath* FindPathToLocationSynchronously(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable)
    static UNavigationPath* FindPathToActorSynchronously(UObject* WorldContextObject, const FVector& PathStart, AActor* GoalActor, float TetherDistance, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
};

