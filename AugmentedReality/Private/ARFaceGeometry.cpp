#include "ARFaceGeometry.h"

FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(EAREye eye) const {
    return FTransform{};
}

FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(EAREye eye) const {
    return FTransform{};
}

float UARFaceGeometry::GetBlendShapeValue(EARFaceBlendShape BlendShape) const {
    return 0.0f;
}

TMap<EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes() const {
    return TMap<EARFaceBlendShape, float>();
}

UARFaceGeometry::UARFaceGeometry() {
    this->bIsTracked = false;
}

