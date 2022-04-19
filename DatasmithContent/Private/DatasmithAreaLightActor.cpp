#include "DatasmithAreaLightActor.h"

ADatasmithAreaLightActor::ADatasmithAreaLightActor() {
    this->Mobility = EComponentMobility::Static;
    this->LightType = EDatasmithAreaLightActorType::Point;
    this->LightShape = EDatasmithAreaLightActorShape::Rectangle;
    this->Intensity = 10.00f;
    this->IntensityUnits = ELightUnits::Candelas;
    this->Temperature = 6500.00f;
    this->IESTexture = NULL;
    this->bUseIESBrightness = false;
    this->IESBrightnessScale = 0.00f;
    this->SourceRadius = 0.00f;
    this->SourceLength = 0.00f;
    this->AttenuationRadius = 1000.00f;
    this->SpotlightInnerAngle = 1.00f;
    this->SpotlightOuterAngle = 44.00f;
}

