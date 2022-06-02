#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
#include "FacilityTurretController.generated.h"

class AActor;
class UHealthComponentBase;
class UAIPerceptionComponent;

UCLASS(Blueprintable)
class AFacilityTurretController : public AFSDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* Perception;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RememberTargetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetargetOnAttackChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RespectAttack;
    
public:
    AFacilityTurretController();
private:
    UFUNCTION(BlueprintCallable)
    void OnTurretsAttackingChanged(bool IsAttacking);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetRevived();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTargetDied(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
    
};

