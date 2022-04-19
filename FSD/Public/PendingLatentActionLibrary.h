#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "PendingLatentActionLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class UPendingLatentActionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPendingLatentActionLibrary();
    UFUNCTION(BlueprintCallable)
    static void WaitOneFrame(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
};

