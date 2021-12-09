#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RecallableItem.h"
#include "RecallableSentryGunItem.generated.h"

class UItemUpgrade;
class ARecallableSentryGunItem;
class ARecallableSentryGun;
class UCapacityHoldingItemAggregator;
class UItemPlacerAggregator;
class AItem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecallableSentryGunItemOnActiveItemsChanged, ARecallableSentryGunItem*, Item);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecallableSentryGunItemOnSelectedItemChanged, ARecallableSentryGun*, SentryGun);

UCLASS()
class ARecallableSentryGunItem : public ARecallableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRecallableSentryGunItemOnActiveItemsChanged OnActiveItemsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FRecallableSentryGunItemOnSelectedItemChanged OnSelectedItemChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxSentryCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDistanceBetweenSentries;
    
    UPROPERTY(EditAnywhere)
    FText RecallHoldDescription;
    
    UPROPERTY(EditAnywhere)
    float RecallHoldDuration;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapacityHoldingItemAggregator* AmmoCapacity;
    
    UPROPERTY(Export, VisibleAnywhere)
    UItemPlacerAggregator* ItemPlacer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AItem> LoadoutClass;
    
    UPROPERTY(EditAnywhere)
    float SupplyStatusWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SentryAngleRestriction;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsUpgraded;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveItemUpgraded();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasAmmoLeft();
    
    UFUNCTION(BlueprintPure)
    ARecallableSentryGun* GetSelectedSentryGun();
    
    UFUNCTION(BlueprintPure)
    TArray<ARecallableSentryGun*> GetActiveSentryGuns();
    
    UFUNCTION(BlueprintPure)
    bool AreAllSentriesPlaced() const;
    
    ARecallableSentryGunItem();
};

