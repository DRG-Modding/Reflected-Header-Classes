#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "EDefendPointState.h"
#include "EInputKeys.h"
#include "DefensePointActor.generated.h"

class AGameEvent;
class USingleUsableComponent;
class APlayerCharacter;

UCLASS(Abstract)
class ADefensePointActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AGameEvent> DefenseEvent;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AGameEvent* ActiveDefenceEvent;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_DefendState)
    EDefendPointState DefendState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USingleUsableComponent* DefendPointUsable;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetState(EDefendPointState State);
    
protected:
    UFUNCTION()
    void OnRep_DefendState();
    
    UFUNCTION()
    void OnDefensePointActivated(APlayerCharacter* Player, EInputKeys Key);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DefenseStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DefenseFail();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DefenseComplete();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ADefensePointActor();
};

