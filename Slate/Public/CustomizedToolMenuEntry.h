#pragma once
#include "CoreMinimal.h"
#include "ECustomizedToolMenuVisibility.h"
#include "CustomizedToolMenuEntry.generated.h"

USTRUCT(BlueprintType)
struct FCustomizedToolMenuEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    ECustomizedToolMenuVisibility Visibility;
    
    SLATE_API FCustomizedToolMenuEntry();
};

