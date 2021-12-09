#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "Rotator_NoQuantize.generated.h"

USTRUCT(BlueprintType)
struct FRotator_NoQuantize : public FRotator {
    GENERATED_BODY()
public:
    FSD_API FRotator_NoQuantize();
};

