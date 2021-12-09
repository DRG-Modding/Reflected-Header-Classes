#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine KismetArrayLibrary
#include "FSDKismetArrayExtensionFunctions.generated.h"

UCLASS()
class UFSDKismetArrayExtensionFunctions : public UKismetArrayLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static void Array_GetRandom(const TArray<int32>& TargetArray, int32& Item);
    
    UFSDKismetArrayExtensionFunctions();
};

