#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Rotator_NoQuantize.generated.h"

USTRUCT(BlueprintType)
struct FRotator_NoQuantize : public FRotator {
    GENERATED_BODY()
public:
    FSD_API FRotator_NoQuantize();
};

