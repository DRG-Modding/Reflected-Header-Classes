#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SDFBoxProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFBoxProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector HalfSize;
    
    FSDENGINE_API FSDFBoxProperties();
};

