#pragma once
#include "CoreMinimal.h"
#include "ENDISkeletalMesh_SourceMode.generated.h"

UENUM()
enum class ENDISkeletalMesh_SourceMode : uint8 {
    Default,
    Source,
    AttachParent,
    ENDISkeletalMesh_MAX UMETA(Hidden),
};

