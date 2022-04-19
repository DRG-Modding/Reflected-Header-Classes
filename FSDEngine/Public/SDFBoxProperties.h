#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SDFBoxProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFBoxProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HalfSize;
    
    FSDENGINE_API FSDFBoxProperties();
};

