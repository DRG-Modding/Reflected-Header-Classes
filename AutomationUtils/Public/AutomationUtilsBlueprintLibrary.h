#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "AutomationUtilsBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class AUTOMATIONUTILS_API UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void TakeGameplayAutomationScreenshot(const FString& ScreenshotName, float MaxGlobalError, float MaxLocalError, const FString& MapNameOverride);
    
    UAutomationUtilsBlueprintLibrary();
};

