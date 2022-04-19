#pragma once
#include "CoreMinimal.h"
#include "ModioValidationError.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioValidationError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    FString FieldName;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    FString ValidationFailureDescription;
    
    FModioValidationError();
};

