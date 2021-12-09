#include "TimeSynthFilterSettings.h"

FTimeSynthFilterSettings::FTimeSynthFilterSettings() {
    this->FilterType = ETimeSynthFilterType::LowPass;
    this->CutoffFrequency = 0.00f;
    this->FilterQ = 0.00f;
}

