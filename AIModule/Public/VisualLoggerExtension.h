#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "VisualLoggerExtension.generated.h"

UCLASS(Abstract)
class AIMODULE_API UVisualLoggerExtension : public UObject {
    GENERATED_BODY()
public:
    UVisualLoggerExtension();
};

