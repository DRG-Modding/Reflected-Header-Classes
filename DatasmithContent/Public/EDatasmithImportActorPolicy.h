#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportActorPolicy.generated.h"

UENUM()
enum class EDatasmithImportActorPolicy : uint8 {
    Update,
    Full,
    Ignore,
};

