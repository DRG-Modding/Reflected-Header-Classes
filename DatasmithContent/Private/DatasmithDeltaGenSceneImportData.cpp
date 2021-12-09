#include "DatasmithDeltaGenSceneImportData.h"

UDatasmithDeltaGenSceneImportData::UDatasmithDeltaGenSceneImportData() {
    this->bMergeNodes = false;
    this->bOptimizeDuplicatedNodes = false;
    this->bRemoveInvisibleNodes = false;
    this->bSimplifyNodeHierarchy = false;
    this->bImportVar = false;
    this->bImportPos = false;
    this->bImportTml = false;
}

