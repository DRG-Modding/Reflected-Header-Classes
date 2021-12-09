#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "PlaySoundInterface.h"
#include "CharacterStateComponent.generated.h"

class UDialogDataAsset;
class APlayerCharacter;
class UPlayerMovementComponent;

UCLASS(Abstract, Blueprintable)
class UCharacterStateComponent : public UActorComponent, public IPlaySoundInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    uint8 StateId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* EnterStateShout;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* ExitStateShout;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* AttentionShout;
    
private:
    UPROPERTY(Export, Transient)
    UPlayerMovementComponent* PlayerMovement;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveStateTick(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveStateExit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveStateEnter();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAuthority() const;
    
    UFUNCTION(BlueprintPure)
    float GetStateTime() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetStateID() const;
    
    UFUNCTION(BlueprintPure)
    bool GetStateActive() const;
    
protected:
    UFUNCTION(BlueprintPure)
    UPlayerMovementComponent* GetCharacterMovement() const;
    
public:
    UCharacterStateComponent();
};

