#include "NiagaraActor.h"

class UNiagaraComponent;

void ANiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish) {
}

void ANiagaraActor::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}

ANiagaraActor::ANiagaraActor() {
    this->bDestroyOnSystemFinish = false;
}

