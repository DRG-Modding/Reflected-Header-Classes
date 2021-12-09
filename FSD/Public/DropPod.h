#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EDropPodState.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "DropPod.generated.h"

class UObject;
class UAutoCarverComponent;
class ADropPod;
class UCurveFloat;

UCLASS()
class ADropPod : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DropHeight;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Replicated)
    FVector TargetLocation;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UAutoCarverComponent* AutoCarver;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DepartCurve;
    
    UPROPERTY(EditAnywhere)
    float CarverRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector CarverScale;
    
    UPROPERTY(EditAnywhere)
    float DepartureTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    EDropPodState State;
    
    UPROPERTY(EditAnywhere)
    float DrillSpeed;
    
    UPROPERTY(EditAnywhere)
    float FreeFallAcceleration;
    
    UPROPERTY(EditAnywhere)
    float FreeFallSpeed;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartDrilling();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PrepForTakeOff();
    
protected:
    UFUNCTION()
    void OnRep_State();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPrepForTakeOff();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDroppodImpact();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDrillingStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeparting();
    
public:
    UFUNCTION(BlueprintCallable)
    static ADropPod* DropToMission(UObject* WorldContextObject, TSubclassOf<ADropPod> podClass, const FVector& Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Depart();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ADropPod();
};

