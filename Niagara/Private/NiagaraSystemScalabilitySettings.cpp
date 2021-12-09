#include "NiagaraSystemScalabilitySettings.h"

FNiagaraSystemScalabilitySettings::FNiagaraSystemScalabilitySettings() {
    this->bCullByDistance = false;
    this->bCullMaxInstanceCount = false;
    this->bCullByMaxTimeWithoutRender = false;
    this->MaxDistance = 0.00f;
    this->MaxInstances = 0.00f;
    this->MaxTimeWithoutRender = 0.00f;
}

