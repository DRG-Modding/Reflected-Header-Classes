#include "TcpMessagingSettings.h"

UTcpMessagingSettings::UTcpMessagingSettings() {
    this->EnableTransport = true;
    this->ConnectionRetryDelay = 2;
    this->bStopServiceWhenAppDeactivates = true;
}

