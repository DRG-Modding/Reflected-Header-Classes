#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EFSDTargetPlatform.h"
#include "FrontendBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class UFrontendBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFrontendBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void OpenURLInExternalBrowser(const FString& URL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFSDTargetPlatform FSDTargetPlatform();
    
};

