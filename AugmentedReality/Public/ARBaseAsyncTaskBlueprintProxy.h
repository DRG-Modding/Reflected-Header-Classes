#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "ARBaseAsyncTaskBlueprintProxy.generated.h"

UCLASS(Abstract)
class AUGMENTEDREALITY_API UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UARBaseAsyncTaskBlueprintProxy();
};

