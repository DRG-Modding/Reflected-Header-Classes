#pragma once
#include "CoreMinimal.h"
#include "EnvQueryRequest.generated.h"

class UObject;
class UEnvQuery;
class UWorld;

USTRUCT()
struct AIMODULE_API FEnvQueryRequest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    FEnvQueryRequest();
};

