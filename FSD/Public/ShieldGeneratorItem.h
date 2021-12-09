#pragma once
#include "CoreMinimal.h"
#include "ThrowableItem.h"
#include "UpgradableGear.h"
#include "RejoinListener.h"
#include "CoolDownProgressStyle.h"
#include "ShieldGeneratorItem.generated.h"

class UCapacityHoldingItemAggregator;
class UDialogDataAsset;

UCLASS()
class AShieldGeneratorItem : public AThrowableItem, public IUpgradableGear, public IRejoinListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapacityHoldingItemAggregator* ChargeCapacity;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapacityHoldingItemAggregator* CarryCapacity;
    
    UPROPERTY(EditAnywhere)
    float RechargeDuration;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_UnchargedCount)
    int32 UnchargedCount;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float RechargeProgress;
    
    UPROPERTY(EditAnywhere)
    float SupplyStatusWeight;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* ShoutRecarged;
    
    UPROPERTY(EditAnywhere)
    FCoolDownProgressStyle RechargeProgressUI;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveGeneratorReturned();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveGeneratorRechargeProgress(float Progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveGeneratorRecharged();
    
    UFUNCTION()
    void OnRep_UnchargedCount(int32 OldCount);
    
    UFUNCTION(BlueprintPure)
    bool GetIsRecharging() const;
    
    UFUNCTION(BlueprintCallable)
    void GeneratorReturned();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AShieldGeneratorItem();
};

