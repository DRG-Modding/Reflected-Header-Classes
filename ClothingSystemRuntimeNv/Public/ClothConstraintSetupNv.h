#pragma once
#include "CoreMinimal.h"
#include "ClothConstraintSetupNv.generated.h"

USTRUCT(BlueprintType)
struct FClothConstraintSetupNv {
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
    
    CLOTHINGSYSTEMRUNTIMENV_API FClothConstraintSetupNv();
};

