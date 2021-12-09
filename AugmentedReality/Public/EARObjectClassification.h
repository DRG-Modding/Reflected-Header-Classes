#pragma once
#include "CoreMinimal.h"
#include "EARObjectClassification.generated.h"

UENUM()
enum class EARObjectClassification : uint8 {
    NotApplicable,
    Unknown,
    Wall,
    Ceiling,
    Floor,
    Table,
    Seat,
    Face,
    Image,
    World,
    SceneObject,
    HandMesh,
};

