#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NavigationData.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ERecastPartitioning.h"
//CROSS-MODULE INCLUDE: CoreUObject Box
#include "RecastNavMesh.generated.h"

class UNavArea;

UCLASS(NotPlaceable)
class NAVIGATIONSYSTEM_API ARecastNavMesh : public ANavigationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bDrawTriangleEdges: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bDrawPolyEdges: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawFilledPolys: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawNavMeshEdges: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawTileBounds: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawPathCollidingGeometry: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawTileLabels: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawPolygonLabels: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawDefaultPolygonCost: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawLabelsOnPathNodes: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawNavLinks: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawFailedNavLinks: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawClusters: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawOctree: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawOctreeDetails: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawMarkedForbiddenPolys: 1;
    
    UPROPERTY(Config)
    uint8 bDistinctlyDrawTilesBeingBuilt: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDrawNavMesh: 1;
    
    UPROPERTY(Config, EditAnywhere)
    float DrawOffset;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bFixedTilePoolSize: 1;
    
    UPROPERTY(Config, EditAnywhere)
    int32 TilePoolSize;
    
    UPROPERTY(Config, EditAnywhere)
    float TileSizeUU;
    
    UPROPERTY(Config, EditAnywhere)
    float CellSize;
    
    UPROPERTY(Config, EditAnywhere)
    float CellHeight;
    
    UPROPERTY(Config, EditAnywhere)
    float AgentRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float AgentHeight;
    
    UPROPERTY(Config, VisibleAnywhere)
    float AgentMaxHeight;
    
    UPROPERTY(Config, EditAnywhere)
    float AgentMaxSlope;
    
    UPROPERTY(Config, EditAnywhere)
    float AgentMaxStepHeight;
    
    UPROPERTY(Config, EditAnywhere)
    float MinRegionArea;
    
    UPROPERTY(Config, EditAnywhere)
    float MergeRegionSize;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxSimplificationError;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 MaxSimultaneousTileGenerationJobsCount;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 TileNumberHardLimit;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    int32 PolyRefTileBits;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    int32 PolyRefNavPolyBits;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    int32 PolyRefSaltBits;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector NavMeshOriginOffset;
    
    UPROPERTY(Config)
    float DefaultDrawDistance;
    
    UPROPERTY(Config)
    float DefaultMaxSearchNodes;
    
    UPROPERTY(Config)
    float DefaultMaxHierarchicalSearchNodes;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TEnumAsByte<ERecastPartitioning::Type> RegionPartitioning;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TEnumAsByte<ERecastPartitioning::Type> LayerPartitioning;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 RegionChunkSplits;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 LayerChunkSplits;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bSortNavigationAreasByCost: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bPerformVoxelFiltering: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bMarkLowHeightAreas: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bFilterLowSpanSequences: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bFilterLowSpanFromTileCache: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bDoFullyAsyncNavDataGathering: 1;
    
    UPROPERTY(Config)
    uint8 bUseBetterOffsetsFromCorners: 1;
    
    UPROPERTY(Config)
    uint8 bStoreEmptyTileLayers: 1;
    
    UPROPERTY(Config)
    uint8 bUseVirtualFilters: 1;
    
    UPROPERTY(Config)
    uint8 bAllowNavLinkAsPathEnd: 1;
    
private:
    UPROPERTY(Config)
    uint8 bUseVoxelCache: 1;
    
    UPROPERTY(Config)
    float TileSetUpdateInterval;
    
public:
    UPROPERTY(Config, EditAnywhere)
    float HeuristicScale;
    
    UPROPERTY(Config, EditAnywhere)
    float VerticalDeviationFromGroundCompensation;
    
    UFUNCTION(BlueprintCallable)
    bool K2_ReplaceAreaInTileBounds(FBox Bounds, TSubclassOf<UNavArea> OldArea, TSubclassOf<UNavArea> NewArea, bool ReplaceLinks);
    
    ARecastNavMesh();
};

