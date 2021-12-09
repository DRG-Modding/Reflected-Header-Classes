#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "RejoinFloat.generated.h"

USTRUCT(BlueprintType)
struct FRejoinFloat {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ItemKey;
    
    UPROPERTY()
    FName ValueKey;
    
    UPROPERTY()
    float Value;
    
    FSD_API FRejoinFloat();
};

