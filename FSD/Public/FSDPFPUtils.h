#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "FSDPFPUtils.generated.h"

UCLASS(BlueprintType)
class UFSDPFPUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static bool IsPlayfabLoaded();
    
    UFUNCTION(BlueprintPure)
    static FString GetPlayfabUserId();
    
    UFSDPFPUtils();
};

