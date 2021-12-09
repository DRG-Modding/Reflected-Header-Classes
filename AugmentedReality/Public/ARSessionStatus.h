#pragma once
#include "CoreMinimal.h"
#include "EARSessionStatus.h"
#include "ARSessionStatus.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARSessionStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString AdditionalInfo;
    
    UPROPERTY(BlueprintReadOnly)
    EARSessionStatus Status;
    
    FARSessionStatus();
};

