#include "FieldSystemActor.h"
#include "FieldSystemComponent.h"

AFieldSystemActor::AFieldSystemActor() {
    this->FieldSystemComponent = CreateDefaultSubobject<UFieldSystemComponent>(TEXT("FieldSystemComponent"));
}

