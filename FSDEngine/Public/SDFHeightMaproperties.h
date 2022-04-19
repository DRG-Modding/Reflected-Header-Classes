#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SDFHeightMaproperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFHeightMaproperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    FSDENGINE_API FSDFHeightMaproperties();
};

