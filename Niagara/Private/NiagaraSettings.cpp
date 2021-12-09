#include "NiagaraSettings.h"

UNiagaraSettings::UNiagaraSettings() {
    this->AdditionalParameterEnums.AddDefaulted(5);
    this->QualityLevels.AddDefaulted(5);
    this->DefaultEffectTypePtr = NULL;
}

