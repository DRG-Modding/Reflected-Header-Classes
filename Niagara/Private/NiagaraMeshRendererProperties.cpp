#include "NiagaraMeshRendererProperties.h"

UNiagaraMeshRendererProperties::UNiagaraMeshRendererProperties() {
    this->ParticleMesh = NULL;
    this->SortMode = ENiagaraSortMode::None;
    this->bOverrideMaterials = false;
    this->bSortOnlyWhenTranslucent = true;
    this->bSubImageBlend = false;
    this->FacingMode = ENiagaraMeshFacingMode::Default;
    this->bLockedAxisEnable = false;
    this->LockedAxisSpace = ENiagaraMeshLockedAxisSpace::Simulation;
}

