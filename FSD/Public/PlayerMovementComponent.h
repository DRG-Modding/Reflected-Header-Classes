#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CharacterMovementComponent -FallbackName=CharacterMovementComponent
#include "PlayerMovementComponent.generated.h"

class AActor;
class USoundBase;
class APlayerCharacter;
class UCharacterStateComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UPlayerMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool DebugFastMove;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    USoundBase* SlidingOnIceSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeClimbZVelocity;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float MovementPenalty;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCharacterStateComponent> CurrentPhysUpdateState;
    
public:
    UPlayerMovementComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveGravityModifier(AActor* SourceActor);
    
    UFUNCTION(BlueprintCallable)
    void AddGravityModifier(AActor* SourceActor, float effect);
    
};

