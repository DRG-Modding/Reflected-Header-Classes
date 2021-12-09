#include "SynthComponent.h"

class USoundSubmixBase;

void USynthComponent::Stop() {
}

void USynthComponent::Start() {
}

void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier) {
}

void USynthComponent::SetSubmixSend(USoundSubmixBase* Submix, float SendLevel) {
}

bool USynthComponent::IsPlaying() const {
    return false;
}

USynthComponent::USynthComponent() {
    this->bAutoDestroy = false;
    this->bStopWhenOwnerDestroyed = true;
    this->bAllowSpatialization = false;
    this->bOverrideAttenuation = false;
    this->bOutputToBusOnly = false;
    this->AttenuationSettings = NULL;
    this->ConcurrencySettings = NULL;
    this->SourceEffectChain = NULL;
    this->SoundSubmix = NULL;
    this->bIsUISound = false;
    this->bIsPreviewSound = false;
    this->EnvelopeFollowerAttackTime = 0;
    this->EnvelopeFollowerReleaseTime = 0;
    this->Synth = NULL;
    this->AudioComponent = NULL;
}

