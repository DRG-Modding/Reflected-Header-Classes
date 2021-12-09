#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EFSDTargetPlatform.h"
#include "FrontendBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class UFrontendBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void OpenURLInExternalBrowser(const FString& URL);
    
    UFUNCTION(BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintPure)
    static EFSDTargetPlatform FSDTargetPlatform();
    
    UFrontendBlueprintLibrary();
};
