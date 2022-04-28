#pragma once
#include "CoreMinimal.h"
#include "OAISimpleDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AIRequestID.h"
#include "EPathFollowingResult.h"
#include "AIAsyncTaskBlueprintProxy.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAIAsyncTaskBlueprintProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOAISimpleDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOAISimpleDelegate OnFail;
    
    UAIAsyncTaskBlueprintProxy();
    UFUNCTION()
    void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    
};

