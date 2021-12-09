#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EEnvDirection.h"
#include "EnvDirection.generated.h"

class UEnvQueryContext;

USTRUCT(BlueprintType)
struct AIMODULE_API FEnvDirection {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> LineFrom;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> LineTo;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Rotation;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvDirection::Type> DirMode;
    
    FEnvDirection();
};

