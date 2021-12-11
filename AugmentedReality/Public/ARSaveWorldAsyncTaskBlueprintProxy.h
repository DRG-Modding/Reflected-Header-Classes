#pragma once
#include "CoreMinimal.h"
#include "ARBaseAsyncTaskBlueprintProxy.h"
#include "ARSaveWorldAsyncTaskBlueprintProxy.generated.h"

class UObject;
class UARSaveWorldAsyncTaskBlueprintProxy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARSaveWorldAsyncTaskBlueprintProxyOnFailed, const TArray<uint8>&, SavedWorld);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARSaveWorldAsyncTaskBlueprintProxyOnSuccess, const TArray<uint8>&, SavedWorld);

UCLASS()
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FARSaveWorldAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FARSaveWorldAsyncTaskBlueprintProxyOnFailed OnFailed;
    
    UFUNCTION(BlueprintCallable)
    static UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(UObject* WorldContextObject);
    
    UARSaveWorldAsyncTaskBlueprintProxy();
};

