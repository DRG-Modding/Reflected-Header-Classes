#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "LocalizedLanguageInfo.h"
#include "LocalizationFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class ULocalizationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static TArray<FLocalizedLanguageInfo> GetLocalizedLanguages();
    
    ULocalizationFunctionLibrary();
};

