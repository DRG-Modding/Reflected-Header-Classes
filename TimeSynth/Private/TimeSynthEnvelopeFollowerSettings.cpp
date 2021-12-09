#include "TimeSynthEnvelopeFollowerSettings.h"

FTimeSynthEnvelopeFollowerSettings::FTimeSynthEnvelopeFollowerSettings() {
    this->AttackTime = 0.00f;
    this->ReleaseTime = 0.00f;
    this->PeakMode = ETimeSynthEnvelopeFollowerPeakMode::MeanSquared;
    this->bIsAnalogMode = false;
}

