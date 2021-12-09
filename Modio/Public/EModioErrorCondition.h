#pragma once
#include "CoreMinimal.h"
#include "EModioErrorCondition.generated.h"

UENUM()
enum class EModioErrorCondition : uint8 {
    NoError,
    NetworkError = 0x2,
    ConfigurationError,
    InvalidArgsError,
    FilesystemError,
    InternalError,
    EntityNotFoundError = 0xC,
    UserTermsOfUseError,
    SubmitReportError,
};

