#pragma once
#include "CoreMinimal.h"
#include "FSDPhysicsActor.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ResourceChunk.generated.h"

class APlayerCharacter;
class USimpleObjectInfoComponent;
class USoundCue;
class UResourceData;

UCLASS()
class AResourceChunk : public AFSDPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CollectDuration;
    
    UPROPERTY(EditAnywhere)
    bool CanBeCollectedNormally;
    
    UPROPERTY(Transient)
    bool CanBeCollected;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleObjectInfoComponent* InfoComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ResourceAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* PickupSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* ResourceData;
    
    UPROPERTY(Transient)
    TArray<APlayerCharacter*> OverlappingPlayers;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CollectedBy)
    TWeakObjectPtr<APlayerCharacter> CollectedBy;
    
    UFUNCTION()
    void SetCollectOpen();
    
    UFUNCTION()
    void OnRep_CollectedBy();
    
public:
    UFUNCTION(BlueprintPure)
    UResourceData* GetResourceData() const;
    
    UFUNCTION(BlueprintPure)
    float GetResourceAmount() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void CalcMovement(float InProgress, const FVector& InVector, FVector& OutVelocity, FVector& OutAngularVelocity);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AResourceChunk();
};

