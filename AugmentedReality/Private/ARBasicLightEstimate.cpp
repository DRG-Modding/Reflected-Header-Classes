#include "ARBasicLightEstimate.h"

float UARBasicLightEstimate::GetAmbientIntensityLumens() const {
    return 0.0f;
}

float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin() const {
    return 0.0f;
}

FLinearColor UARBasicLightEstimate::GetAmbientColor() const {
    return FLinearColor{};
}

UARBasicLightEstimate::UARBasicLightEstimate() {
    this->AmbientIntensityLumens = 0.00f;
    this->AmbientColorTemperatureKelvin = 0.00f;
}

