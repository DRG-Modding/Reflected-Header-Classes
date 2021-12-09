#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RessuplyPodItem.generated.h"

class UObject;
class AActor;
class UItemPlacerAggregator;
class ARessuplyPod;

UCLASS()
class ARessuplyPodItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ResupplyBeacon;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UItemPlacerAggregator> ItemPlacerClass;
    
    UPROPERTY(Export, Transient)
    UItemPlacerAggregator* ItemPlacerInstance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ARessuplyPod> SupplyPodClass;
    
    UPROPERTY(EditAnywhere)
    int32 ResourceCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText OrderDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText LogText;
    
    UPROPERTY(EditAnywhere)
    float CoolDown;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Used)
    bool Used;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Call_Resupply(const FVector& Location);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveItemPlacerSpawned(UItemPlacerAggregator* InItemPlacer);
    
    UFUNCTION()
    void OnRep_Used();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetResourceCost(UObject* WorldContextObject) const;
    
protected:
    UFUNCTION(BlueprintPure)
    UItemPlacerAggregator* GetActiveAggregator() const;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ARessuplyPodItem();
};

