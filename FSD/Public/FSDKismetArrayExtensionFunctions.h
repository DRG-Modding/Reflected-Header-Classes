#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KismetArrayLibrary -FallbackName=KismetArrayLibrary
#include "FSDKismetArrayExtensionFunctions.generated.h"

UCLASS()
class UFSDKismetArrayExtensionFunctions : public UKismetArrayLibrary {
    GENERATED_BODY()
public:
    UFSDKismetArrayExtensionFunctions();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Array_GetRandom(const TArray<int32>& TargetArray, int32& Item);
    
};

