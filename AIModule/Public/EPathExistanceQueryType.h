#pragma once
#include "CoreMinimal.h"
#include "EPathExistanceQueryType.generated.h"

UENUM()
namespace EPathExistanceQueryType {
    enum Type {
        NavmeshRaycast2D,
        HierarchicalQuery,
        RegularPathFinding,
    };
}

