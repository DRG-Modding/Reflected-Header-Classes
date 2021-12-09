#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.generated.h"

USTRUCT()
struct JSONUTILITIES_API FJsonObjectWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString JsonString;
    
    FJsonObjectWrapper();
};

