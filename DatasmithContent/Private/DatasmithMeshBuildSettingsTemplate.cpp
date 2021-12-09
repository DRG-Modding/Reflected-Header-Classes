#include "DatasmithMeshBuildSettingsTemplate.h"

FDatasmithMeshBuildSettingsTemplate::FDatasmithMeshBuildSettingsTemplate() {
    this->bUseMikkTSpace = false;
    this->bRecomputeNormals = false;
    this->bRecomputeTangents = false;
    this->bRemoveDegenerates = false;
    this->bBuildAdjacencyBuffer = false;
    this->bUseHighPrecisionTangentBasis = false;
    this->bUseFullPrecisionUVs = false;
    this->bGenerateLightmapUVs = false;
    this->MinLightmapResolution = 0;
    this->SrcLightmapIndex = 0;
    this->DstLightmapIndex = 0;
}

