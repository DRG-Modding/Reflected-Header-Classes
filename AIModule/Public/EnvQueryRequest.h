#pragma once
#include "CoreMinimal.h"
#include "EnvQueryRequest.generated.h"

class UWorld;
class UEnvQuery;
class UObject;

USTRUCT()
struct AIMODULE_API FEnvQueryRequest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UEnvQuery* QueryTemplate;
    
    UPROPERTY()
    UObject* Owner;
    
    UPROPERTY()
    UWorld* World;
    
public:
    FEnvQueryRequest();
};

