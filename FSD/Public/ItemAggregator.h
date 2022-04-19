#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ItemAggregator.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UItemAggregator : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText CounterText;
    
public:
    UItemAggregator();
    UFUNCTION(BlueprintCallable)
    void UnbindAllEvents();
    
};

