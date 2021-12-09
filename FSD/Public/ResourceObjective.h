#pragma once
#include "CoreMinimal.h"
#include "ResourceBasedObjective.h"
#include "ResourceObjective.generated.h"

class UResourceData;
class UCappedResource;

UCLASS(Abstract)
class UResourceObjective : public UResourceBasedObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ResourcesRequired;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ResourcesCollected)
    float ResourcesCollected;
    
    UPROPERTY(EditAnywhere)
    float ResourceBuffer;
    
    UPROPERTY(EditAnywhere)
    float RoundToNearest;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ObjectivesText;
    
    UPROPERTY(EditAnywhere)
    FText CreditsRewardText;
    
    UFUNCTION()
    void OnResourceChanged(UCappedResource* CappedResource, float Amount);
    
    UFUNCTION()
    void OnRep_ResourcesCollected(float prevAmount);
    
public:
    UFUNCTION(BlueprintPure)
    float GetRequiredAmount(float missionScaling) const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UResourceObjective();
};

