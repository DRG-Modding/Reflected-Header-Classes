#include "ModioSettings.h"

UModioSettings::UModioSettings() {
    this->GameId = 0;
    this->Environment = EModioEnvironment::Test;
    this->LogLevel = EModioLogLevel::Info;
    this->DefaultPortal = EModioPortal::None;
}

