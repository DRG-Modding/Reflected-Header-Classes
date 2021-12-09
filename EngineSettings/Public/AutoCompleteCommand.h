#pragma once
#include "CoreMinimal.h"
#include "AutoCompleteCommand.generated.h"

USTRUCT(BlueprintType)
struct FAutoCompleteCommand {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString Command;
    
    UPROPERTY(Config, EditAnywhere)
    FString Desc;
    
    ENGINESETTINGS_API FAutoCompleteCommand();
};

