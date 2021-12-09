#include "CullingField.h"

class UFieldNodeBase;
class UCullingField;

UCullingField* UCullingField::SetCullingField(const UFieldNodeBase* NewCulling, const UFieldNodeBase* NewField, TEnumAsByte<EFieldCullingOperationType> NewOperation) {
    return NULL;
}

UCullingField::UCullingField() {
    this->Culling = NULL;
    this->Field = NULL;
    this->Operation = Field_Culling_Inside;
}

