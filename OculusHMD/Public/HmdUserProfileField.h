#pragma once
#include "CoreMinimal.h"
#include "HmdUserProfileField.generated.h"

USTRUCT(BlueprintType)
struct FHmdUserProfileField {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString FieldName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString FieldValue;
    
    OCULUSHMD_API FHmdUserProfileField();
};

