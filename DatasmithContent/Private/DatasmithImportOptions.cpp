#include "DatasmithImportOptions.h"

UDatasmithImportOptions::UDatasmithImportOptions() {
    this->SearchPackagePolicy = EDatasmithImportSearchPackagePolicy::Current;
    this->MaterialConflictPolicy = EDatasmithImportAssetConflictPolicy::Replace;
    this->TextureConflictPolicy = EDatasmithImportAssetConflictPolicy::Replace;
    this->StaticMeshActorImportPolicy = EDatasmithImportActorPolicy::Update;
    this->LightImportPolicy = EDatasmithImportActorPolicy::Update;
    this->CameraImportPolicy = EDatasmithImportActorPolicy::Update;
    this->OtherActorImportPolicy = EDatasmithImportActorPolicy::Update;
    this->MaterialQuality = EDatasmithImportMaterialQuality::UseNoFresnelCurves;
}

