#include "DatasmithVREDSceneImportData.h"

UDatasmithVREDSceneImportData::UDatasmithVREDSceneImportData() {
    this->bMergeNodes = false;
    this->bOptimizeDuplicatedNodes = false;
    this->bImportMats = false;
    this->bImportVar = false;
    this->bCleanVar = false;
    this->bImportLightInfo = false;
    this->bImportClipInfo = false;
}

