#include "TimeSynthQuantizationSettings.h"

FTimeSynthQuantizationSettings::FTimeSynthQuantizationSettings() {
    this->BeatsPerMinute = 0.00f;
    this->BeatsPerBar = 0;
    this->BeatDivision = ETimeSynthBeatDivision::One;
    this->EventDelaySeconds = 0.00f;
    this->GlobalQuantization = ETimeSynthEventQuantization::None;
}

