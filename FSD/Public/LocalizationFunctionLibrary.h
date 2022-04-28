#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LocalizedLanguageInfo.h"
#include "LocalizationFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ULocalizationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULocalizationFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FLocalizedLanguageInfo> GetLocalizedLanguages();
    
};

