#pragma once
#include "CoreMinimal.h"
#include "ERecastPartitioning.h"
#include "RecastNavMeshGenerationProperties.generated.h"

USTRUCT()
struct NAVIGATIONSYSTEM_API FRecastNavMeshGenerationProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 TilePoolSize;
    
    UPROPERTY(EditAnywhere)
    float TileSizeUU;
    
    UPROPERTY(EditAnywhere)
    float CellSize;
    
    UPROPERTY(EditAnywhere)
    float CellHeight;
    
    UPROPERTY(EditAnywhere)
    float AgentRadius;
    
    UPROPERTY(EditAnywhere)
    float AgentHeight;
    
    UPROPERTY(EditAnywhere)
    float AgentMaxSlope;
    
    UPROPERTY(EditAnywhere)
    float AgentMaxStepHeight;
    
    UPROPERTY(EditAnywhere)
    float MinRegionArea;
    
    UPROPERTY(EditAnywhere)
    float MergeRegionSize;
    
    UPROPERTY(EditAnywhere)
    float MaxSimplificationError;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 TileNumberHardLimit;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<ERecastPartitioning::Type> RegionPartitioning;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<ERecastPartitioning::Type> LayerPartitioning;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 RegionChunkSplits;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 LayerChunkSplits;
    
    UPROPERTY(EditAnywhere)
    uint8 bSortNavigationAreasByCost: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bPerformVoxelFiltering: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bMarkLowHeightAreas: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bFilterLowSpanSequences: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bFilterLowSpanFromTileCache: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFixedTilePoolSize: 1;
    
    FRecastNavMeshGenerationProperties();
};

