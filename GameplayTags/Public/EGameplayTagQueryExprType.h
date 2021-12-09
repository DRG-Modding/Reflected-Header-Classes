#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagQueryExprType.generated.h"

UENUM()
namespace EGameplayTagQueryExprType {
    enum Type {
        Undefined,
        AnyTagsMatch,
        AllTagsMatch,
        NoTagsMatch,
        AnyExprMatch,
        AllExprMatch,
        NoExprMatch,
    };
}

