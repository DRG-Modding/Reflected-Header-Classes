#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISubsystem.h"
#include "EnvQueryInstanceCache.h"
#include "EEnvQueryRunMode.h"
#include "EnvQueryManager.generated.h"

class UEnvQueryContext;
class UEnvQuery;
class UObject;
class UEnvQueryInstanceBlueprintWrapper;

UCLASS(BlueprintType, Transient, Config=Game)
class AIMODULE_API UEnvQueryManager : public UAISubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEnvQueryInstanceCache> InstanceCache;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEnvQueryContext*> LocalContexts;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    float MaxAllowedTestingTime;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    bool bTestQueriesUsingBreadth;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 QueryCountWarningThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    double QueryCountWarningInterval;
    
public:
    UEnvQueryManager();
    UFUNCTION(BlueprintCallable)
    static UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, TEnumAsByte<EEnvQueryRunMode::Type> RunMode, TSubclassOf<UEnvQueryInstanceBlueprintWrapper> WrapperClass);
    
};

