#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EDebrisItemPass.h"
#include "VeinResource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "EncountersSpawnedDelegateDelegate.h"
#include "EncounterSpecialItem.h"
#include "TunnelNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CarvedResource.h"
#include "GemResourceAmount.h"
#include "CollectableSpawnableItem.h"
#include "ESpawnSettings.h"
#include "RoomNode.h"
#include "GeneratedInfluenceSets.h"
#include "GeneratedInstantCarvers.h"
#include "GeneratedDebris.h"
#include "PathObstacle.h"
#include "InfluenceMap.h"
#include "EDebrisCarvedType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "RandRange.h"
#include "DebrisCapsule.h"
#include "ProceduralSetup.generated.h"

class UPLSEncounterComponent;
class AFSDPlayerController;
class UProceduralTunnelComponent;
class USpecialEvent;
class UNoisyPathfinderComponent;
class UProceduralObjectColliders;
class UCaveInfluencer;
class ADeepCSGWorld;
class UFloodFillSettings;
class AProceduralSetup;
class UMissionDNA;
class UBiome;
class UResourceData;
class UTunnelParameters;
class URoomGeneratorBase;

UCLASS(Blueprintable)
class FSD_API AProceduralSetup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowItemNoisePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStreamServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStreamAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStreamAsyncServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEncountersSpawnedDelegate OnEncounterSpawnedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEncounterSpecialItem> SpecialEncountersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* ForcedSpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* ForcedTreasure;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNoisyPathfinderComponent* NoisyPathfinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProceduralTunnelComponent* ProceduralTunnel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPLSEncounterComponent* Encounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProceduralObjectColliders* ObjectColliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADeepCSGWorld* CSGWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* PathfinderNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVeinResource> VeinResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCarvedResource> CarvedResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMissionDNA> MissionDNA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGemResourceAmount> GemResourcesToGenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCollectableSpawnableItem> CollectablesToGenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnSettings SpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSpawnSpecialEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldCarveTunnels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRoomNode> Rooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRoomNode> RoomsInitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTunnelNode> tunnels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGeneratedInfluenceSets GeneratedInfluenceSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGeneratedInstantCarvers GeneratedInstantCarvers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGeneratedDebris GeneratedDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(EditAnywhere, Transient)
    float missionLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPathObstacle> PathObstacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInfluenceMap InfluenceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UResourceData*> SpawnedResources;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    float CaveDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PostProcessActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpecialEvent* SpecialEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRoomPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Pass1Completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsePerLevelCritterSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastCompletedPLSPass;
    
public:
    AProceduralSetup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartGenerationOnClient(AFSDPlayerController* client);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSpecialEvents();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnObjectiveEncounter();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnObjectiveCriticalItems();
    
    UFUNCTION(BlueprintCallable)
    static void SpawnItems_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SpawnItems();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnEncounters();
    
    UFUNCTION(BlueprintCallable)
    static void SpawnDebrisItems_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo, EDebrisItemPass pass, int32 Depth);
    
    UFUNCTION(BlueprintCallable)
    void SpawnDebrisItems(EDebrisItemPass pass);
    
    UFUNCTION(BlueprintCallable)
    void SetSeed(int32 NewSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetData();
    
    UFUNCTION(BlueprintCallable)
    void RemoveBLockedEntrances();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPLSDataRecieved();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectivesCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCarverDataRecieved(EDebrisItemPass pass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGeneratedDataReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarverDataReady(EDebrisItemPass pass) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeObjectives();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMissionDNA* GetMissionDNA() const;
    
protected:
    UFUNCTION(BlueprintPure)
    TMap<FString, float> GetGemsResourceAmounts() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADeepCSGWorld* GetCSGWorld() const;
    
protected:
    UFUNCTION(BlueprintPure)
    TMap<FString, float> GetCollectablesResourceAmounts() const;
    
public:
    UFUNCTION(BlueprintCallable)
    static void GenerateRoomsFromGraph_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo, int32 CarvePass);
    
    UFUNCTION(BlueprintCallable)
    void GenerateRoomsFromGraph(int32 CarvePass);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateResourceVeins_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GenerateResourceVeins();
    
    UFUNCTION(BlueprintCallable)
    static void GeneratePostCarveRooms_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GeneratePostCarveRooms();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateLandscapeFromData(int32 NewSeed, const TArray<FRoomNode>& NewRooms, const TArray<FPathObstacle>& Obstacles);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateLandscape();
    
    UFUNCTION(BlueprintCallable)
    static void GenerateDebrisVeins_Async(const AProceduralSetup*& setup, EDebrisCarvedType CarverType, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GenerateDebrisVeins(EDebrisCarvedType CarverType);
    
    UFUNCTION(BlueprintCallable)
    FVector FindLocationInDirection(FVector Origin, FVector Direction, float horizontalDeviation, float verticalDeviation, FRandRange Distance, float additionalDistance);
    
    UFUNCTION(BlueprintCallable)
    void FindEntrancesForAllConnections();
    
    UFUNCTION(BlueprintCallable)
    static void FillTunnels_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void FillTunnels();
    
    UFUNCTION(BlueprintCallable)
    void DoneCarving();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoAsyncThreadGeneration() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateTunnelPaths();
    
    UFUNCTION(BlueprintCallable)
    int32 CreateItemDepths();
    
    UFUNCTION(BlueprintCallable)
    void CreateGeneratedInfluenceSet();
    
    UFUNCTION(BlueprintCallable)
    int32 ConnectRooms(UPARAM(Ref) FRoomNode& From, UPARAM(Ref) FRoomNode& to, bool hasDirt, UTunnelParameters* tunnelParameterOverride);
    
    UFUNCTION(BlueprintCallable)
    int32 ConnectRoomIds(int32 fromID, int32 toID, bool hasDirt, UTunnelParameters* tunnelParameterOverride);
    
    UFUNCTION(BlueprintCallable)
    void CommitCarving(bool finalCommit, bool generateMesh);
    
    UFUNCTION(BlueprintCallable)
    void CarveWithGeneratedInstantCarvers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CarveTunnels();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginLiveGeneration();
    
    UFUNCTION(BlueprintCallable)
    void BeginGenerating();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddRoomToInitialState(const FRoomNode& RoomNode);
    
    UFUNCTION(BlueprintCallable)
    int32 AddRoom(FVector Location, bool CanHaveEnemies, URoomGeneratorBase* RoomGenerator, bool canBeRotated, FVector& outCenter, FRoomNode& outRoom, float ResourceMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void AddInfluenceToTunnelEntrances(UCaveInfluencer* Influencer, float range);
    
    UFUNCTION(BlueprintCallable)
    void AddImportantLocation(const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddEnemyDebris();
    
    UFUNCTION(BlueprintCallable)
    int32 AddDebrisCollider(const FDebrisCapsule& Capsule);
    
    UFUNCTION(BlueprintCallable)
    void AddCaveInfluence(UCaveInfluencer* Influencer, const FVector& Location, float range);
    
    UFUNCTION(BlueprintCallable)
    int32 AddAirParticlesCollider(const FDebrisCapsule& Capsule);
    
};

