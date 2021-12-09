#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE: OnlineSubsystemUtils BlueprintSessionResult
#include "FSDLookupSessionId.generated.h"

class UObject;
class UFSDLookupSessionId;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDLookupSessionIdOnSuccess, FBlueprintSessionResult, Result);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDLookupSessionIdOnFailure);

UCLASS(MinimalAPI)
class UFSDLookupSessionId : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FFSDLookupSessionIdOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FFSDLookupSessionIdOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UFSDLookupSessionId* FSDLookupSessionId(UObject* WorldContextObject, const FString& SessionKey);
    
public:
    UFSDLookupSessionId();
};

