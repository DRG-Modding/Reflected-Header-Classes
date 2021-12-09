#include "DatasmithStaticMeshImportOptions.h"

FDatasmithStaticMeshImportOptions::FDatasmithStaticMeshImportOptions() {
    this->MinLightmapResolution = EDatasmithImportLightmapMin::LIGHTMAP_16;
    this->MaxLightmapResolution = EDatasmithImportLightmapMax::LIGHTMAP_64;
    this->bGenerateLightmapUVs = false;
    this->bRemoveDegenerates = false;
}

