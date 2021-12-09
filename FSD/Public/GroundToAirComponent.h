#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "StateStats.h"
#include "GroundToAirComponent.generated.h"

class ADeepPathfinderCharacter;
class UDeepPathfinderMovement;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGroundToAirComponentOnChangedPathfinderState);

UCLASS(BlueprintType)
class UGroundToAirComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGroundToAirComponentOnChangedPathfinderState OnChangedPathfinderState;
    
protected:
    UPROPERTY(Export)
    UDeepPathfinderMovement* CurrentMove;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WalkTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WalkTimeMaxRandomOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WalkTimeMinRandomOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool WalkUseTimer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStateStats WalkStats;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlyTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlyTimeMaxRandomOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlyTimeMinRandomOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool FlyUseTimer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FStateStats FlyStats;
    
    UPROPERTY(ReplicatedUsing=OnRep_StateChange)
    bool IsFlying;
    
    UPROPERTY()
    TWeakObjectPtr<ADeepPathfinderCharacter> OwningPathfinder;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsFlying(bool aIsFlying);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowedToChangeState(bool aIsAllowed);
    
protected:
    UFUNCTION()
    void OnRep_StateChange();
    
public:
    UFUNCTION(BlueprintPure)
    bool GetIsWalking() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsFlying() const;
    
    UFUNCTION(BlueprintCallable)
    void Engage();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UGroundToAirComponent();
};
