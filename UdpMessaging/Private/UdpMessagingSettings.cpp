#include "UdpMessagingSettings.h"

UUdpMessagingSettings::UUdpMessagingSettings() {
    this->EnabledByDefault = false;
    this->EnableTransport = true;
    this->bAutoRepair = true;
    this->MaxSendRate = 1.00f;
    this->AutoRepairAttemptLimit = 10;
    this->bStopServiceWhenAppDeactivates = true;
    this->MessageFormat = EUdpMessageFormat::CborPlatformEndianness;
    this->MulticastTimeToLive = 1;
    this->EnableTunnel = false;
}

