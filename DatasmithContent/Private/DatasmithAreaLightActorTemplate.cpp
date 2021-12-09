#include "DatasmithAreaLightActorTemplate.h"

UDatasmithAreaLightActorTemplate::UDatasmithAreaLightActorTemplate() {
    this->LightType = EDatasmithAreaLightActorType::Point;
    this->LightShape = EDatasmithAreaLightActorShape::Rectangle;
    this->Intensity = 0.00f;
    this->IntensityUnits = ELightUnits::Unitless;
    this->Temperature = 0.00f;
    this->bUseIESBrightness = false;
    this->IESBrightnessScale = 0.00f;
    this->SourceRadius = 0.00f;
    this->SourceLength = 0.00f;
    this->AttenuationRadius = 0.00f;
}

