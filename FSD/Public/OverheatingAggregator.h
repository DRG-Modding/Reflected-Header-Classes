#pragma once
#include "CoreMinimal.h"
#include "ItemAggregator.h"
#include "OverheatingAggregator.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverheatingAggregatorOnOverheatingProgressChanged, float, Progress);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverheatingAggregatorOnOverheatedChanged, bool, Overheated);

UCLASS()
class UOverheatingAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOverheatingAggregatorOnOverheatingProgressChanged OnOverheatingProgressChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOverheatingAggregatorOnOverheatedChanged OnOverheatedChanged;
    
protected:
    UPROPERTY(EditAnywhere, Replicated)
    float HeatLossPerSecond;
    
    UPROPERTY(EditAnywhere, Replicated)
    float OverheatedDuration;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsOverheated)
    bool bIsOverheated;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Temperature)
    float Temperature;
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_SetTemperature(float NewTemperature);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_SetIsOverheated(bool NewOverheated);
    
    UFUNCTION()
    void OnRep_Temperature();
    
    UFUNCTION()
    void OnRep_IsOverheated();
    
public:
    UFUNCTION(BlueprintPure)
    float GetTemperature() const;
    
    UFUNCTION(BlueprintPure)
    float GetOverheatingProgress() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsOverheated() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UOverheatingAggregator();
};

