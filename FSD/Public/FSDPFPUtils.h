#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FSDPFPUtils.generated.h"

UCLASS(BlueprintType)
class UFSDPFPUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDPFPUtils();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayfabLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayfabUserId();
    
};

