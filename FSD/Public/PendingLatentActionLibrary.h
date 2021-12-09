#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine LatentActionInfo
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "PendingLatentActionLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class UPendingLatentActionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void WaitOneFrame(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UPendingLatentActionLibrary();
};

