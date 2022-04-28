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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> LineFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> LineTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Rotation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvDirection::Type> DirMode;
    
    FEnvDirection();
};

