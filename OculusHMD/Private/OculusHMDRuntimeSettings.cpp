#include "OculusHMDRuntimeSettings.h"

UOculusHMDRuntimeSettings::UOculusHMDRuntimeSettings() {
    this->bAutoEnabled = false;
    this->bSupportsDash = true;
    this->bCompositesDepth = true;
    this->bHQDistortion = false;
    this->PixelDensityMin = 0.50f;
    this->PixelDensityMax = 1.00f;
    this->CPULevel = 2;
    this->GPULevel = 3;
    this->FFRLevel = EFixedFoveatedRenderingLevel::FFR_Off;
    this->bChromaCorrection = false;
    this->bRecenterHMDWithController = true;
}

