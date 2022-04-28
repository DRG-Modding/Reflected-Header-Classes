#pragma once
#include "CoreMinimal.h"
#include "ERecastPartitioning.h"
#include "RecastNavMeshGenerationProperties.generated.h"

USTRUCT(BlueprintType)
struct NAVIGATIONSYSTEM_API FRecastNavMeshGenerationProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileNumberHardLimit;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<ERecastPartitioning::Type> RegionPartitioning;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<ERecastPartitioning::Type> LayerPartitioning;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegionChunkSplits;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LayerChunkSplits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSortNavigationAreasByCost: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPerformVoxelFiltering: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMarkLowHeightAreas: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseExtraTopCellWhenMarkingAreas: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFilterLowSpanSequences: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFilterLowSpanFromTileCache: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFixedTilePoolSize: 1;
    
    FRecastNavMeshGenerationProperties();
};

