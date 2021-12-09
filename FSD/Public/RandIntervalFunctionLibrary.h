#pragma once
#include "CoreMinimal.h"
#include "RandInterval.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "RandIntervalFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class URandIntervalFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static float GetFloatValue(const FRandInterval& RandInterval);
    
    URandIntervalFunctionLibrary();
};

