#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagAssetInterface
#include "ERessuplyPodState.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RessuplyPod.generated.h"

class ARessuplyPod;
class UDamageComponent;
class UCurveFloat;
class UDialogDataAsset;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRessuplyPodOnStateChanged, ARessuplyPod*, InPod, ERessuplyPodState, InState);

UCLASS()
class ARessuplyPod : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRessuplyPodOnStateChanged OnStateChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDamageComponent* Damage;
    
    UPROPERTY(EditAnywhere)
    float KillRadius;
    
    UPROPERTY(EditAnywhere)
    float DropHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DropDelay;
    
    UPROPERTY(EditAnywhere)
    float MissionShoutDelay;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DialogOrderAccepted;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DialogPodArrived;
    
    UPROPERTY(Transient)
    UDialogDataAsset* CurrentMissionShout;
    
    UPROPERTY(Transient)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_State)
    ERessuplyPodState State;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TargetDropTime;
    
    UPROPERTY(Replicated, Transient)
    float ServerDropProgress;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DropCurve;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* PlayerSpawnPoint;
    
    UPROPERTY(EditAnywhere)
    float CloseToImpactDistance;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIdling();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTunnelBLocked();
    
    UFUNCTION()
    void OnRep_State(ERessuplyPodState oldState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDropStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDroppodImpact();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDroppodCloseToImpact();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AActor* DropToTarget(UObject* WorldContextObject, TSubclassOf<ARessuplyPod> podClass, const FVector& Location, AActor* requester);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ARessuplyPod();
};

