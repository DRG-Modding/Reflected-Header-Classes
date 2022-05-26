#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportSearchPackagePolicy.generated.h"

UENUM(BlueprintType)
enum class EDatasmithImportSearchPackagePolicy : uint8 {
    Current,
    All,
};

