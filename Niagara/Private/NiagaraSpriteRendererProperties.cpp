#include "NiagaraSpriteRendererProperties.h"

UNiagaraSpriteRendererProperties::UNiagaraSpriteRendererProperties() {
    this->Material = NULL;
    this->Alignment = ENiagaraSpriteAlignment::Unaligned;
    this->FacingMode = ENiagaraSpriteFacingMode::FaceCamera;
    this->SortMode = ENiagaraSortMode::None;
    this->bSubImageBlend = false;
    this->bRemoveHMDRollInVR = false;
    this->bSortOnlyWhenTranslucent = true;
    this->MinFacingCameraBlendDistance = 0.00f;
    this->MaxFacingCameraBlendDistance = 0.00f;
}

