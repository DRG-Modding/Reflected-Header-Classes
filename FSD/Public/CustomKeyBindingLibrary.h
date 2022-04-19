#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CustomKeyBindingLibrary.generated.h"

UCLASS()
class UCustomKeyBindingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCustomKeyBindingLibrary();
};

