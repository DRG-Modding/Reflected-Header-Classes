#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CustomKeyBindingLibrary.generated.h"

UCLASS(Blueprintable)
class UCustomKeyBindingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCustomKeyBindingLibrary();
};

