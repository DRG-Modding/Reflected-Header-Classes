#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EPathFollowingResult.h"
#include "AIRequestID.h"
#include "AIAsyncTaskBlueprintProxy.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIAsyncTaskBlueprintProxyOnSuccess, TEnumAsByte<EPathFollowingResult::Type>, MovementResult);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIAsyncTaskBlueprintProxyOnFail, TEnumAsByte<EPathFollowingResult::Type>, MovementResult);

UCLASS(MinimalAPI)
class UAIAsyncTaskBlueprintProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAIAsyncTaskBlueprintProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FAIAsyncTaskBlueprintProxyOnFail OnFail;
    
    UFUNCTION()
    void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
    UAIAsyncTaskBlueprintProxy();
};

