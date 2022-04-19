#pragma once
#include "CoreMinimal.h"
#include "EARSessionStatus.h"
#include "ARSessionStatus.generated.h"

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FARSessionStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString AdditionalInfo;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EARSessionStatus Status;
    
    FARSessionStatus();
};

