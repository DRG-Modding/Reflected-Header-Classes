#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
#include "LoginBlueprintCallProxy.generated.h"

class ULoginBlueprintCallProxy;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLoginBlueprintCallProxyOnSuccess);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLoginBlueprintCallProxyOnFailure);

UCLASS()
class ULoginBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLoginBlueprintCallProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FLoginBlueprintCallProxyOnFailure OnFailure;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static ULoginBlueprintCallProxy* Login(UObject* NewWorldContextObject);
    
    ULoginBlueprintCallProxy();
};

