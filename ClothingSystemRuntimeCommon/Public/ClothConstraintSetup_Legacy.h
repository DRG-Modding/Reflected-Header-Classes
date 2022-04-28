#pragma once
#include "CoreMinimal.h"
#include "ClothConstraintSetup_Legacy.generated.h"

USTRUCT(BlueprintType)
struct FClothConstraintSetup_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Stiffness;
    
    UPROPERTY(EditAnywhere)
    float StiffnessMultiplier;
    
    UPROPERTY(EditAnywhere)
    float StretchLimit;
    
    UPROPERTY(EditAnywhere)
    float CompressionLimit;
    
    CLOTHINGSYSTEMRUNTIMECOMMON_API FClothConstraintSetup_Legacy();
};

