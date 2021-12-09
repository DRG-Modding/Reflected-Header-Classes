#pragma once
#include "CoreMinimal.h"
#include "DatasmithMeshBuildSettingsTemplate.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithMeshBuildSettingsTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bUseMikkTSpace: 1;
    
    UPROPERTY()
    uint8 bRecomputeNormals: 1;
    
    UPROPERTY()
    uint8 bRecomputeTangents: 1;
    
    UPROPERTY()
    uint8 bRemoveDegenerates: 1;
    
    UPROPERTY()
    uint8 bBuildAdjacencyBuffer: 1;
    
    UPROPERTY()
    uint8 bUseHighPrecisionTangentBasis: 1;
    
    UPROPERTY()
    uint8 bUseFullPrecisionUVs: 1;
    
    UPROPERTY()
    uint8 bGenerateLightmapUVs: 1;
    
    UPROPERTY()
    int32 MinLightmapResolution;
    
    UPROPERTY()
    int32 SrcLightmapIndex;
    
    UPROPERTY()
    int32 DstLightmapIndex;
    
    FDatasmithMeshBuildSettingsTemplate();
};

