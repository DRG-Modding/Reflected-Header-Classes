#pragma once
#include "CoreMinimal.h"
#include "TentacleBase.h"
#include "EFacilityTentacleState.h"
#include "TriggerAI.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "FacilityTentacle.generated.h"

class USkeletalMeshComponent;
class UAnimMontage;
class UDebrisPositioning;

UCLASS()
class FSD_API AFacilityTentacle : public ATentacleBase, public ITriggerAI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SwaySpeed;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool Extended;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> HitReactions;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_TentacleState)
    EFacilityTentacleState TentacleState;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* HeadMesh;
    
    UFUNCTION()
    void PlayHitReaction(float Amount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStateChanged(EFacilityTentacleState NewState);
    
    UFUNCTION()
    void OnRep_TentacleState();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool FindBurrowLocation(UDebrisPositioning* Debris, const FVector& Origin, float Radius, FVector& OutLocation);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFacilityTentacle();
};

