#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "HttpUtilityLibrary.generated.h"

UCLASS(Blueprintable)
class FSD_API UHttpUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHttpUtilityLibrary();
};

