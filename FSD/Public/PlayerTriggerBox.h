#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TriggerBox
#include "PlayerTriggerBox.generated.h"

class APlayerCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerTriggerBoxOnPlayerExited, APlayerCharacter*, Player);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerTriggerBoxOnPlayerEntered, APlayerCharacter*, Player);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerTriggerBoxOnAllPlayersExited);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerTriggerBoxOnAllPlayersEntered);

UCLASS()
class APlayerTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayerTriggerBoxOnPlayerEntered OnPlayerEntered;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerTriggerBoxOnPlayerExited OnPlayerExited;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerTriggerBoxOnAllPlayersEntered OnAllPlayersEntered;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerTriggerBoxOnAllPlayersExited OnAllPlayersExited;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<APlayerCharacter*> PlayersInside;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAnyPlayerInside(bool excludingDeadPlayers) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPlayerExited(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPlayerEntered(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnAllPlayersExited();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnAllPlayersEntered();
    
public:
    UFUNCTION(BlueprintPure)
    bool AreAllPlayersInside(bool excludingDeadPlayers) const;
    
    APlayerTriggerBox();
};

