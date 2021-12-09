#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: Engine UniqueNetIdRepl
#include "EventRewardDispenser.generated.h"

class AFSDPlayerState;
class USchematic;
class AEventRewardFrame;
class APlayerCharacter;

UCLASS()
class AEventRewardDispenser : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PlayerId)
    FUniqueNetIdRepl PlayerId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AEventRewardFrame* DispenserFrame;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_PoweredUp)
    bool PoweredUp;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_IsActivated)
    bool IsActivated;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_SelectedReward)
    USchematic* SelectedReward;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSelectedReward(USchematic* InReward);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool PowerUp(APlayerCharacter* InPlayerCharacter);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRewardSelected();
    
    UFUNCTION()
    void OnRep_SelectedReward();
    
    UFUNCTION()
    void OnRep_PoweredUp();
    
    UFUNCTION()
    void OnRep_PlayerId();
    
    UFUNCTION()
    void OnRep_IsActivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPoweredUp();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOwnerAssigned();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpenDispenser();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOwningPlayer(APlayerCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintPure)
    APlayerCharacter* GetPlayerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    AFSDPlayerState* GetPlayer() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AEventRewardDispenser();
};

