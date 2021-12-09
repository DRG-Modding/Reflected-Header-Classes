#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine CharacterMovementComponent
#include "PlayerMovementComponent.generated.h"

class USoundBase;
class APlayerCharacter;
class UCharacterStateComponent;
class AActor;

UCLASS()
class UPlayerMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool DebugFastMove;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* SlidingOnIceSound;
    
protected:
    UPROPERTY(EditAnywhere)
    float LedgeClimbZVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float MovementPenalty;
    
    UPROPERTY(Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UCharacterStateComponent> CurrentPhysUpdateState;
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveGravityModifier(AActor* SourceActor);
    
    UFUNCTION(BlueprintCallable)
    void AddGravityModifier(AActor* SourceActor, float effect);
    
    UPlayerMovementComponent();
};
