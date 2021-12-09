#pragma once
#include "CoreMinimal.h"
#include "ResourceBasedObjective.h"
#include "GatheItemsObjective.generated.h"

class UCollectableResourceData;
class UCappedResource;

UCLASS(Abstract)
class UGatheItemsObjective : public UResourceBasedObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ItemsRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ItemsSpawnedModifier;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ItemsCollected)
    int32 ItemsCollected;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCollectableResourceData* ItemResource;
    
    UFUNCTION()
    void OnResourceChanged(UCappedResource* CappedResource, float Amount);
    
    UFUNCTION()
    void OnRep_ItemsCollected(int32 prevAmount);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UGatheItemsObjective();
};

