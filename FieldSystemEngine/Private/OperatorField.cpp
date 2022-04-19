#include "OperatorField.h"

class UFieldNodeBase;
class UOperatorField;

UOperatorField* UOperatorField::SetOperatorField(float NewMagnitude, const UFieldNodeBase* NewLeftField, const UFieldNodeBase* NewRightField, TEnumAsByte<EFieldOperationType> NewOperation) {
    return NULL;
}

UOperatorField::UOperatorField() {
    this->Magnitude = 1.00f;
    this->RightField = NULL;
    this->LeftField = NULL;
    this->Operation = Field_Multiply;
}

