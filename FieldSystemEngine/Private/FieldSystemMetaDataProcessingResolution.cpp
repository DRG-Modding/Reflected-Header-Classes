#include "FieldSystemMetaDataProcessingResolution.h"

class UFieldSystemMetaDataProcessingResolution;

UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> NewResolutionType) {
    return NULL;
}

UFieldSystemMetaDataProcessingResolution::UFieldSystemMetaDataProcessingResolution() {
    this->ResolutionType = Field_Resolution_Minimal;
}

