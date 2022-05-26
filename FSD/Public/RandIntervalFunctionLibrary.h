#pragma once
#include "CoreMinimal.h"
#include "RandInterval.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RandIntervalFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class URandIntervalFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URandIntervalFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatValue(const FRandInterval& RandInterval);
    
};

