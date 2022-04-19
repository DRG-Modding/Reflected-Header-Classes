#pragma once
#include "CoreMinimal.h"
#include "EFaceComponentDebugMode.generated.h"

UENUM()
enum class EFaceComponentDebugMode : uint8 {
    None,
    ShowEyeVectors,
    ShowFaceMesh,
};

