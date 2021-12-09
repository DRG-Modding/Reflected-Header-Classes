#include "UdpMessagingSettings.h"

UUdpMessagingSettings::UUdpMessagingSettings() {
    this->EnableTransport = true;
    this->bAutoRepair = true;
    this->bStopServiceWhenAppDeactivates = true;
    this->MessageFormat = EUdpMessageFormat::CborPlatformEndianness;
    this->MulticastTimeToLive = 1;
    this->EnableTunnel = false;
}

