#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RandInterval.h"
#include "RandIntervalFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class URandIntervalFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URandIntervalFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatValue(const FRandInterval& RandInterval);
    
};

