#pragma once
#include "CoreMinimal.h"
#include "HostileGuntowerModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
#include "HostileTargetingGuntowerModule.generated.h"

class AActor;

UCLASS(Blueprintable)
class AHostileTargetingGuntowerModule : public AHostileGuntowerModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SensedTargets;
    
    UPROPERTY(EditAnywhere)
    float TurretRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetedActor;
    
    UPROPERTY(EditAnywhere)
    float TargetingRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetingFromBone;
    
    UPROPERTY(EditAnywhere)
    float TimeUntilForgetTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysUpdateAimRotation;
    
public:
    AHostileTargetingGuntowerModule();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
    
};

