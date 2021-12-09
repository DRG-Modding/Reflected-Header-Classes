#pragma once
#include "CoreMinimal.h"
#include "ItemAggregator.h"
#include "CapacityBasedItemAggregator.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapacityBasedItemAggregatorOnCurrentAmountChanged, int32, Amount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapacityBasedItemAggregatorOnMaxAmountChanged, int32, Amount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapacityBasedItemAggregatorOnClipAndTotalChanged, int32, Amount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapacityBasedItemAggregatorOnReloadTimeChanged, float, Amount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCapacityBasedItemAggregatorOnReloadStarted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCapacityBasedItemAggregatorOnReloadComplete);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapacityBasedItemAggregatorOnMaxAmmoCapacityChanged, int32, Amount);

UCLASS()
class UCapacityBasedItemAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnCurrentAmountChanged OnCurrentAmountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnMaxAmountChanged OnMaxAmountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnClipAndTotalChanged OnClipAndTotalChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnReloadTimeChanged OnReloadTimeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnReloadComplete OnReloadComplete;
    
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnReloadStarted OnReloadStarted;
    
    UPROPERTY(BlueprintAssignable)
    FCapacityBasedItemAggregatorOnMaxAmmoCapacityChanged OnMaxAmmoCapacityChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool showClipCount;
    
public:
    UFUNCTION()
    void ReloadStarted();
    
    UFUNCTION()
    void ReloadComplete();
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxAmount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentAmount() const;
    
    UCapacityBasedItemAggregator();
};

