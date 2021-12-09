#include "DatasmithPostProcessSettingsTemplate.h"

FDatasmithPostProcessSettingsTemplate::FDatasmithPostProcessSettingsTemplate() {
    this->bOverride_WhiteTemp = false;
    this->bOverride_ColorSaturation = false;
    this->bOverride_VignetteIntensity = false;
    this->bOverride_FilmWhitePoint = false;
    this->bOverride_AutoExposureMethod = false;
    this->bOverride_CameraISO = false;
    this->bOverride_CameraShutterSpeed = false;
    this->bOverride_DepthOfFieldFstop = false;
    this->WhiteTemp = 0.00f;
    this->VignetteIntensity = 0.00f;
    this->AutoExposureMethod = AEM_Histogram;
    this->CameraISO = 0.00f;
    this->CameraShutterSpeed = 0.00f;
    this->DepthOfFieldFstop = 0.00f;
}

