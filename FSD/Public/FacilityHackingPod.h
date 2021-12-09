#pragma once
#include "CoreMinimal.h"
#include "RessuplyPod.h"
#include "EHackingPodState.h"
#include "FacilityHackingPod.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFacilityHackingPodOnHackingPodStateChanged, EHackingPodState, State);

UCLASS()
class FSD_API AFacilityHackingPod : public ARessuplyPod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFacilityHackingPodOnHackingPodStateChanged OnHackingPodStateChanged;
    
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_PodState)
    EHackingPodState PodState;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(EHackingPodState aState);
    
    UFUNCTION()
    void OnRep_PodState(EHackingPodState oldState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExitState(EHackingPodState oldState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnterState(EHackingPodState NextState);
    
public:
    UFUNCTION(BlueprintPure)
    EHackingPodState GetState() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFacilityHackingPod();
};

