#pragma once
#include "CoreMinimal.h"
#include "CustomFieldData.generated.h"

USTRUCT(BlueprintType)
struct FCustomFieldData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Key;
    
    UPROPERTY()
    FString Value;
    
    BUILDPATCHSERVICES_API FCustomFieldData();
};

