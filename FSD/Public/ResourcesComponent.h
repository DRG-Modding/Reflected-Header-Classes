#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ResourcesComponent.generated.h"

class UCappedResource;
class UResourceData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResourcesComponentOnResourceChanged, UCappedResource*, Resource, float, Amount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResourcesComponentOnResourceAdded, UCappedResource*, Resource);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResourcesComponentOnResourceIncreased, UCappedResource*, Resource, float, Amount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResourcesComponentOnResourceFull, UCappedResource*, Resource);

UCLASS(BlueprintType)
class UResourcesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FResourcesComponentOnResourceChanged OnResourceChanged;
    
    UPROPERTY(BlueprintAssignable)
    FResourcesComponentOnResourceIncreased OnResourceIncreased;
    
    UPROPERTY(BlueprintAssignable)
    FResourcesComponentOnResourceFull OnResourceFull;
    
    UPROPERTY(BlueprintAssignable)
    FResourcesComponentOnResourceAdded OnResourceAdded;
    
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Resources)
    TArray<UCappedResource*> Resources;
    
    UPROPERTY(EditAnywhere)
    float ResourceCap;
    
    UFUNCTION()
    void ResourceIncreased(UCappedResource* Resource, float Delta);
    
    UFUNCTION()
    void ResourceFull(UCappedResource* Resource);
    
    UFUNCTION()
    void ResourceChanged(UCappedResource* Resource, float currentAmount);
    
    UFUNCTION()
    void OnRep_Resources();
    
public:
    UFUNCTION(BlueprintPure)
    static int32 GetXPFromResourceMap(const TMap<UResourceData*, float>& NewResources);
    
    UFUNCTION(BlueprintPure)
    int32 GetXpFromMining() const;
    
    UFUNCTION(BlueprintCallable)
    static TMap<UResourceData*, float> GetSeparateResourcesFromMap(const TMap<UResourceData*, float>& NewResources);
    
    UFUNCTION(BlueprintPure)
    UCappedResource* GetResource(UResourceData* Data, bool createIfAmountIsZero);
    
    UFUNCTION(BlueprintPure)
    float GetCapacityPct() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UCappedResource*> GetAllResources();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UResourcesComponent();
};

