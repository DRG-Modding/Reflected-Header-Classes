#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EnvelopeFollowerListener.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnvelopeFollowerListenerOnEnvelopeFollowerUpdate, float, EnvelopeValue);

UCLASS()
class SYNTHESIS_API UEnvelopeFollowerListener : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnvelopeFollowerListenerOnEnvelopeFollowerUpdate OnEnvelopeFollowerUpdate;
    
    UEnvelopeFollowerListener();
};

