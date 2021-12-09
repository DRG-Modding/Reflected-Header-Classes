#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Box
#include "SplineModProperties.generated.h"

USTRUCT(BlueprintType)
struct FSplineModProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBox ElementBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceZUp;
    
    FSDENGINE_API FSplineModProperties();
};

