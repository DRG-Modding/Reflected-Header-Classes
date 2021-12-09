#pragma once
#include "CoreMinimal.h"
#include "EModioReportType.generated.h"

UENUM()
enum class EModioReportType : uint8 {
    Generic,
    DMCA,
    NotWorking,
    RudeContent,
    IllegalContent,
    StolenContent,
    FalseInformation,
    Other,
};

