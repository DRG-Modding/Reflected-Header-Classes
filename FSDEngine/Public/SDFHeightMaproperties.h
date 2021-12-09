#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SDFHeightMaproperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFHeightMaproperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    FSDENGINE_API FSDFHeightMaproperties();
};

