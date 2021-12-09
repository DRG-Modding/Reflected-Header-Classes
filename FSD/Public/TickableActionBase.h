#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "TickableActionBase.generated.h"

UCLASS()
class UTickableActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UTickableActionBase();
};

