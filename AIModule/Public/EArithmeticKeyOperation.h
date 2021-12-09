#pragma once
#include "CoreMinimal.h"
#include "EArithmeticKeyOperation.generated.h"

UENUM()
namespace EArithmeticKeyOperation {
    enum Type {
        Equal,
        NotEqual,
        Less,
        LessOrEqual,
        Greater,
        GreaterOrEqual,
    };
}

