#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportAssetConflictPolicy.generated.h"

UENUM()
enum class EDatasmithImportAssetConflictPolicy : uint8 {
    Replace,
    Update,
    Use,
    Ignore,
};

