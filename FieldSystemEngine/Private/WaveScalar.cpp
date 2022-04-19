#include "WaveScalar.h"

class UWaveScalar;

UWaveScalar* UWaveScalar::SetWaveScalar(float NewMagnitude, FVector NewPosition, float NewWavelength, float NewPeriod, float Time, TEnumAsByte<EWaveFunctionType> NewFunction, TEnumAsByte<EFieldFalloffType> NewFalloff) {
    return NULL;
}

UWaveScalar::UWaveScalar() {
    this->Magnitude = 1.00f;
    this->Wavelength = 10000.00f;
    this->Period = 1.00f;
    this->Function = Field_Wave_Cosine;
    this->Falloff = Field_Falloff_Linear;
}

