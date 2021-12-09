#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "CalldownItem.generated.h"

class UResourceData;
class UItemPlacerAggregator;
class ARessuplyPod;
class AActor;

UCLASS()
class ACalldownItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UItemPlacerAggregator> ItemPlacerClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ARessuplyPod> SupplyPodClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* ResouceRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText OrderDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText LogText;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ResupplyBeacon;
    
    UPROPERTY(Export, Transient)
    UItemPlacerAggregator* ItemPlacerInstance;
    
    UPROPERTY(EditAnywhere)
    float CoolDown;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CooldownRemaining;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Call_Resupply(const FVector& Location);
    
public:
    ACalldownItem();
};

