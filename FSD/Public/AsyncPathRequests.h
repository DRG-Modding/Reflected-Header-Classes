#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AsyncPathRequests.generated.h"

class UObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAsyncPathRequests : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> RequestListeners;
    
    UAsyncPathRequests();
};

