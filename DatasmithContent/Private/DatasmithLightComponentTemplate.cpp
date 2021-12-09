#include "DatasmithLightComponentTemplate.h"

UDatasmithLightComponentTemplate::UDatasmithLightComponentTemplate() {
    this->bVisible = false;
    this->CastShadows = false;
    this->bUseTemperature = false;
    this->bUseIESBrightness = false;
    this->Intensity = 0.00f;
    this->Temperature = 0.00f;
    this->IESBrightnessScale = 0.00f;
    this->LightFunctionMaterial = NULL;
    this->IESTexture = NULL;
}

