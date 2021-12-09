#pragma once
#include "CoreMinimal.h"
#include "ClothConstraintSetup_Legacy.generated.h"

USTRUCT(BlueprintType)
struct FClothConstraintSetup_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Stiffness;
    
    UPROPERTY()
    float StiffnessMultiplier;
    
    UPROPERTY()
    float StretchLimit;
    
    UPROPERTY()
    float CompressionLimit;
    
    CLOTHINGSYSTEMRUNTIMECOMMON_API FClothConstraintSetup_Legacy();
};

