#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportScene.generated.h"

UENUM(BlueprintType)
enum class EDatasmithImportScene : uint8 {
    NewLevel,
    CurrentLevel,
    AssetsOnly,
};

