#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ValidationFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class FSD_API UValidationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UValidationFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetSelectedAssets(TArray<FString> Paths);
    
};

