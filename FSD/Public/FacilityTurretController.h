#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
//CROSS-MODULE INCLUDE: AIModule AIStimulus
#include "FacilityTurretController.generated.h"

class UHealthComponentBase;
class UAIPerceptionComponent;
class AActor;

UCLASS()
class AFacilityTurretController : public AFSDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAIPerceptionComponent* Perception;
    
private:
    UPROPERTY(EditAnywhere)
    float RememberTargetTime;
    
    UPROPERTY(EditAnywhere)
    float RetargetOnAttackChance;
    
    UPROPERTY(EditAnywhere)
    bool RespectAttack;
    
    UFUNCTION()
    void OnTurretsAttackingChanged(bool IsAttacking);
    
    UFUNCTION()
    void OnTargetRevived();
    
public:
    UFUNCTION()
    void OnTargetDied(UHealthComponentBase* Health);
    
    UFUNCTION()
    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
    
    AFacilityTurretController();
};

