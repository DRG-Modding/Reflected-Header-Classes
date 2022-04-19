#include "FieldSystemMetaDataFilter.h"

class UFieldSystemMetaDataFilter;

UFieldSystemMetaDataFilter* UFieldSystemMetaDataFilter::SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> NewFilterType) {
    return NULL;
}

UFieldSystemMetaDataFilter::UFieldSystemMetaDataFilter() {
    this->FilterType = Field_Filter_Dynamic;
}

