#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ExpressionInput
#include "GrassInput.generated.h"

class ULandscapeGrassType;

USTRUCT(BlueprintType)
struct FGrassInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    ULandscapeGrassType* GrassType;
    
    UPROPERTY()
    FExpressionInput Input;
    
    LANDSCAPE_API FGrassInput();
};

