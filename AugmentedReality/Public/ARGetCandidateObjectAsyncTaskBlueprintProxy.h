#pragma once
#include "CoreMinimal.h"
#include "ARBaseAsyncTaskBlueprintProxy.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ARGetCandidateObjectAsyncTaskBlueprintProxy.generated.h"

class UObject;
class UARCandidateObject;
class UARGetCandidateObjectAsyncTaskBlueprintProxy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARGetCandidateObjectAsyncTaskBlueprintProxyOnFailed, UARCandidateObject*, SavedObject);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FARGetCandidateObjectAsyncTaskBlueprintProxyOnSuccess, UARCandidateObject*, SavedObject);

UCLASS()
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FARGetCandidateObjectAsyncTaskBlueprintProxyOnFailed OnFailed;
    
    UFUNCTION(BlueprintCallable)
    static UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(UObject* WorldContextObject, FVector Location, FVector Extent);
    
    UARGetCandidateObjectAsyncTaskBlueprintProxy();
};

