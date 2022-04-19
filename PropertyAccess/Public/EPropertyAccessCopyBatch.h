#pragma once
#include "CoreMinimal.h"
#include "EPropertyAccessCopyBatch.generated.h"

UENUM()
enum class EPropertyAccessCopyBatch {
    InternalUnbatched,
    ExternalUnbatched,
    InternalBatched,
    ExternalBatched,
    Count,
};

