#pragma once
#include "CoreMinimal.h"
#include "ETableViewMode.generated.h"

UENUM()
namespace ETableViewMode {
    enum Type {
        List,
        Tile,
        Tree,
    };
}

