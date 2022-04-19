#include "GeometryCacheActor.h"
#include "GeometryCacheComponent.h"

UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent() const {
    return NULL;
}

AGeometryCacheActor::AGeometryCacheActor() {
    this->GeometryCacheComponent = CreateDefaultSubobject<UGeometryCacheComponent>(TEXT("GeometryCacheComponent"));
}

