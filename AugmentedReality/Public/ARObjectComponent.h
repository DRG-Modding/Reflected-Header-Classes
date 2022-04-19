#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "ARObjectUpdatePayload.h"
#include "ARObjectComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARObjectComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_Payload, meta=(AllowPrivateAccess=true))
    FARObjectUpdatePayload ReplicatedPayload;
    
public:
    UARObjectComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARObjectUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdate(const FARObjectUpdatePayload& Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAdd(const FARObjectUpdatePayload& Payload);
    
};

