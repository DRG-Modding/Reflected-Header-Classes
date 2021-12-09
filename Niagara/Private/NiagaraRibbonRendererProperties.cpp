#include "NiagaraRibbonRendererProperties.h"

UNiagaraRibbonRendererProperties::UNiagaraRibbonRendererProperties() {
    this->Material = NULL;
    this->FacingMode = ENiagaraRibbonFacingMode::Screen;
    this->UV0TilingDistance = 0.00f;
    this->UV0AgeOffsetMode = ENiagaraRibbonAgeOffsetMode::Scale;
    this->UV1TilingDistance = 0.00f;
    this->UV1AgeOffsetMode = ENiagaraRibbonAgeOffsetMode::Scale;
    this->DrawDirection = ENiagaraRibbonDrawDirection::FrontToBack;
    this->CurveTension = 0.00f;
    this->TessellationMode = ENiagaraRibbonTessellationMode::Automatic;
    this->TessellationFactor = 16;
    this->bUseConstantFactor = false;
    this->TessellationAngle = 15.00f;
    this->bScreenSpaceTessellation = true;
}

