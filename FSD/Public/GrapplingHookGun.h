#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "Upgradable.h"
#include "GraplingGunState.h"
#include "GrapplingHookGun.generated.h"

class UCoolDownItemAggregator;
class UAnimMontage;
class AGrapplingHookGun;

UCLASS(Abstract)
class AGrapplingHookGun : public AAnimatedItem, public IUpgradable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCoolDownItemAggregator* CoolDownAggregator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FPReloadAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TPReloadAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FPGunslingAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TPGunslingAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeedReleaseModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindUpTime;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool AutoFire;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_State)
    FGraplingGunState State;
    
    UPROPERTY(BlueprintReadOnly)
    float GrapleStartTime;
    
    UFUNCTION(BlueprintCallable)
    void StopGrapple();
    
    UFUNCTION(BlueprintCallable)
    bool StartGrapple();
    
    UFUNCTION(Reliable, Server)
    void Server_SetState(const FGraplingGunState& NewState);
    
    UFUNCTION()
    void OnRep_State(const FGraplingGunState& prevState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnReleaseHook();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrappleUpdate(float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrappleStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrappleFailed(bool TooFar);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrappleEnd();
    
    UFUNCTION(BlueprintPure)
    float GetWindUpProgress() const;
    
public:
    UFUNCTION(BlueprintPure)
    static float GetCooldownDuration(TSubclassOf<AGrapplingHookGun> GrapplingHookGun);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGrapplingHookGun();
};

