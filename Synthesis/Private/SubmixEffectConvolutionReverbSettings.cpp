#include "SubmixEffectConvolutionReverbSettings.h"

FSubmixEffectConvolutionReverbSettings::FSubmixEffectConvolutionReverbSettings() {
    this->NormalizationVolumeDb = 0.00f;
    this->SurroundRearChannelBleedDb = 0.00f;
    this->bInvertRearChannelBleedPhase = false;
    this->bSurroundRearChannelFlip = false;
    this->SurroundRearChannelBleedAmount = 0.00f;
    this->ImpulseResponse = NULL;
    this->AllowHArdwareAcceleration = false;
}

