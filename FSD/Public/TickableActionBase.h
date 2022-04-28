#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "TickableActionBase.generated.h"

UCLASS(Blueprintable)
class UTickableActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UTickableActionBase();
};

