#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISubsystem.h"
#include "EnvQueryInstanceCache.h"
#include "EEnvQueryRunMode.h"
#include "EnvQueryManager.generated.h"

class UEnvQueryContext;
class UEnvQuery;
class UEnvQueryInstanceBlueprintWrapper;
class UObject;

UCLASS(BlueprintType, Transient, Config=Game)
class AIMODULE_API UEnvQueryManager : public UAISubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FEnvQueryInstanceCache> InstanceCache;
    
    UPROPERTY(Transient)
    TArray<UEnvQueryContext*> LocalContexts;
    
    UPROPERTY()
    TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;
    
    UPROPERTY(Config)
    float MaxAllowedTestingTime;
    
    UPROPERTY(Config)
    bool bTestQueriesUsingBreadth;
    
    UPROPERTY(Config)
    int32 QueryCountWarningThreshold;
    
    UPROPERTY(Config)
    double QueryCountWarningInterval;
    
public:
    UFUNCTION(BlueprintCallable)
    static UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, TEnumAsByte<EEnvQueryRunMode::Type> RunMode, TSubclassOf<UEnvQueryInstanceBlueprintWrapper> WrapperClass);
    
    UEnvQueryManager();
};

