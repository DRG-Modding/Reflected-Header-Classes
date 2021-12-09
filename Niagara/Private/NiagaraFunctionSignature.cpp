#include "NiagaraFunctionSignature.h"

FNiagaraFunctionSignature::FNiagaraFunctionSignature() {
    this->bRequiresContext = false;
    this->bMemberFunction = false;
    this->bExperimental = false;
    this->bSupportsCPU = false;
    this->bSupportsGPU = false;
    this->bWriteFunction = false;
}

