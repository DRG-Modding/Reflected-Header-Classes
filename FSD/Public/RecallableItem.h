#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "Upgradable.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RecallableItem.generated.h"

class ARecallableActor;
class AActor;

UCLASS(Abstract)
class ARecallableItem : public AAnimatedItem, public IUpgradable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ARecallableActor> ItemType;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ActiveItems)
    TArray<TWeakObjectPtr<ARecallableActor>> ActiveItems;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSpawnItem(const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnItemSpawned(ARecallableActor* Item);
    
    UFUNCTION()
    void OnRep_ActiveItems();
    
    UFUNCTION()
    void ItemReturnFinished(AActor* Item, bool success);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanSpawnItem(const FVector& Location, const FRotator& Rotation);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ARecallableItem();
};

