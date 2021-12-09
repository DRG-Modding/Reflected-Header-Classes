#pragma once
#include "CoreMinimal.h"
#include "ControlEnemyState.h"
#include "CharacterStateComponent.h"
//CROSS-MODULE INCLUDE: CoreUObject Quat
#include "EEnemyControlState.h"
#include "EnemyControlStateComponent.generated.h"

class UAnimMontage;
class UAIPlayerControlComponent;

UCLASS()
class FSD_API UEnemyControlStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool UseThirdPersonCam;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_StateData)
    FControlEnemyState StateData;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ControlState)
    EEnemyControlState ControlState;
    
    UPROPERTY(Replicated, Transient)
    FQuat AngularVelocity;
    
    UPROPERTY(Replicated, Transient)
    FQuat ControlRotation;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerExit();
    
    UFUNCTION()
    void OnRep_StateData(const FControlEnemyState& oldState);
    
    UFUNCTION()
    void OnRep_ControlState(EEnemyControlState oldState);
    
    UFUNCTION()
    void OnEnemyCrashMontageEnded(UAnimMontage* Montage, bool interrupted);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnControllingEnemyAttached();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnControllingEnemy(bool IsControlling);
    
    UFUNCTION()
    void JumpPressed();
    
    UFUNCTION(BlueprintPure)
    UAIPlayerControlComponent* GetAiPlayerControlComponent();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UEnemyControlStateComponent();
};

