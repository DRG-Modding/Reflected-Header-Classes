#include "NiagaraLightRendererProperties.h"

UNiagaraLightRendererProperties::UNiagaraLightRendererProperties() {
    this->bUseInverseSquaredFalloff = true;
    this->bAffectsTranslucency = false;
    this->bOverrideRenderingEnabled = false;
    this->RadiusScale = 1.00f;
}

