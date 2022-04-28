#pragma once
#include "CoreMinimal.h"
#include "FoundSessionResultDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
#include "FSDLookupSessionId.generated.h"

class UObject;
class UFSDLookupSessionId;

UCLASS(Blueprintable, MinimalAPI)
class UFSDLookupSessionId : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFoundSessionResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
public:
    UFSDLookupSessionId();
private:
    UFUNCTION(BlueprintCallable)
    static UFSDLookupSessionId* FSDLookupSessionId(UObject* WorldContextObject, const FString& SessionKey);
    
};

