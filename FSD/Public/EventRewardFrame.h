#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "EventRewardFrame.generated.h"

class USpecialEventUsableComponent;
class AEventRewardDispenser;

UCLASS()
class AEventRewardFrame : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USpecialEventUsableComponent* EventUsable;
    
protected:
    UPROPERTY(Transient)
    TArray<AEventRewardDispenser*> Dispensers;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool keyInserted;
    
    UPROPERTY(Replicated, Transient)
    TArray<FString> EventPlayerIDs;
    
public:
    UFUNCTION(BlueprintCallable)
    void TurnOff();
    
    UFUNCTION(BlueprintCallable)
    void SetKeyInserted(bool NewKeyInserted);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDispenseRewards(bool dispensRewards);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterDispenser(AEventRewardDispenser* Dispenser);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetDispensRewards() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AEventRewardFrame();
};

