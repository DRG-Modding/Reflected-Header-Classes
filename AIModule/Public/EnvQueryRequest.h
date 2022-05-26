#pragma once
#include "CoreMinimal.h"
#include "EnvQueryRequest.generated.h"

class UWorld;
class UEnvQuery;
class UObject;

USTRUCT(BlueprintType)
struct AIMODULE_API FEnvQueryRequest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    FEnvQueryRequest();
};

