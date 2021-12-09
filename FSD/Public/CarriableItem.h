#pragma once
#include "CoreMinimal.h"
#include "FSDPhysicsActor.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "CarriableItem.generated.h"

class APlayerCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCarriableItemOnAttachedChangeDelegate, bool, Attached, FVector, PrevScale);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCarriableItemOnCarriableDeposited, APlayerCharacter*, fromCharacter);

UCLASS(Abstract)
class ACarriableItem : public AFSDPhysicsActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCarriableItemOnAttachedChangeDelegate OnAttachedChangeDelegate;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FCarriableItemOnCarriableDeposited OnCarriableDeposited;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StrictDeposit;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void Throw(FVector force);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Receive_OnDeposited(APlayerCharacter* fromPlayer);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttachChanged(bool Attached);
    
    ACarriableItem();
};

