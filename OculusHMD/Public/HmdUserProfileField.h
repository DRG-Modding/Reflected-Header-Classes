#pragma once
#include "CoreMinimal.h"
#include "HmdUserProfileField.generated.h"

USTRUCT(BlueprintType)
struct FHmdUserProfileField {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString FieldName;
    
    UPROPERTY(BlueprintReadWrite)
    FString FieldValue;
    
    OCULUSHMD_API FHmdUserProfileField();
};

