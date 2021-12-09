#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "ExampleActor.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FExampleActorOnExampleUpdatedEvent);

UCLASS()
class AExampleActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FExampleActorOnExampleUpdatedEvent OnExampleUpdatedEvent;
    
protected:
    UPROPERTY(EditAnywhere)
    float Field;
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ExampleFunction();
    
    UFUNCTION(Client, Reliable)
    void Client_ExampleFunction();
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_ExampleFunction();
    
    AExampleActor();
};

