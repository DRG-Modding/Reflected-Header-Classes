#include "NiagaraScript.h"

void UNiagaraScript::RaiseOnGPUCompilationComplete() {
}

UNiagaraScript::UNiagaraScript() {
    this->Usage = ENiagaraScriptUsage::Function;
    this->UsageIndex = 0;
}

