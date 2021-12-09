#pragma once
#include "CoreMinimal.h"
#include "CustomizedToolMenuNameArray.generated.h"

USTRUCT(BlueprintType)
struct FCustomizedToolMenuNameArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> Names;
    
    SLATE_API FCustomizedToolMenuNameArray();
};

