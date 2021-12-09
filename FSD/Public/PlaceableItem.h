#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "PlaceableInterface.h"
#include "Upgradable.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "PlaceableItem.generated.h"

class UCapacityHoldingItemAggregator;
class UItemPlacerAggregator;
class AActor;

UCLASS()
class APlaceableItem : public AAnimatedItem, public IUpgradable, public IPlaceableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapacityHoldingItemAggregator* Capacity;
    
    UPROPERTY(Export, VisibleAnywhere)
    UItemPlacerAggregator* ItemPlacer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> PlacableClass;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SpawnItem(FVector Location);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveItemSpawned(AActor* SpawnedActor);
    
    UFUNCTION()
    void OnCarriedAmountChanged(int32 newAmount);
    
public:
    APlaceableItem();
};

