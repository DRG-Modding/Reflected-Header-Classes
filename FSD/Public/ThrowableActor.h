#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "ThrowableActor.generated.h"

class UProjectileMovementComponent;
class APlayerCharacter;

UCLASS()
class AThrowableActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UProjectileMovementComponent* Movement;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsMoving)
    bool IsMoving;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreFellOutOfWorld;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreOwnersCollision;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveIgnoreCharacter(APlayerCharacter* Character);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveHitObject();
    
    UFUNCTION()
    void OnRep_IsMoving();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AThrowableActor();
};

