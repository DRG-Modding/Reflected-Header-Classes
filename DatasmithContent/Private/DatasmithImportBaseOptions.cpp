#include "DatasmithImportBaseOptions.h"

FDatasmithImportBaseOptions::FDatasmithImportBaseOptions() {
    this->SceneHandling = EDatasmithImportScene::NewLevel;
    this->bIncludeGeometry = false;
    this->bIncludeMaterial = false;
    this->bIncludeLight = false;
    this->bIncludeCamera = false;
    this->bIncludeAnimation = false;
}

