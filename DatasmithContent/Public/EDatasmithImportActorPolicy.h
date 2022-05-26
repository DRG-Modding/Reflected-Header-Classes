#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportActorPolicy.generated.h"

UENUM(BlueprintType)
enum class EDatasmithImportActorPolicy : uint8 {
    Update,
    Full,
    Ignore,
};

