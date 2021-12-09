#pragma once
#include "CoreMinimal.h"
#include "EBTDecoratorLogic.generated.h"

UENUM()
namespace EBTDecoratorLogic {
    enum Type {
        Invalid,
        Test,
        And,
        Or,
        Not,
    };
}

