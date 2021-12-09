#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "EHackingPodState.h"
#include "FacilityHackingPodAnimInstance.generated.h"

class AActor;

UCLASS(NonTransient)
class UFacilityHackingPodAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AActor* SaluteTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator LookingDirection;
    
    UPROPERTY(EditAnywhere, Transient)
    FRotator TargetRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsHacking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EHackingPodState PodState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float RadarDishAngle;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSaluter(AActor* salutingTarget);
    
    UFUNCTION(BlueprintCallable)
    void ResetSaluteTarget();
    
    UFacilityHackingPodAnimInstance();
};

