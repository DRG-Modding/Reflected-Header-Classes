#include "RadialFalloff.h"

class URadialFalloff;

URadialFalloff* URadialFalloff::SetRadialFalloff(float NewMagnitude, float NewMinRange, float NewMaxRange, float NewDefault, float NewRadius, FVector NewPosition, TEnumAsByte<EFieldFalloffType> NewFalloff) {
    return NULL;
}

URadialFalloff::URadialFalloff() {
    this->Magnitude = 1.00f;
    this->MinRange = 0.00f;
    this->MaxRange = 1.00f;
    this->Default = 0.00f;
    this->Radius = 0.00f;
    this->Falloff = Field_Falloff_Linear;
}

