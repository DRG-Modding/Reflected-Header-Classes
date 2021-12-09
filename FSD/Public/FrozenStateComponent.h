#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "RandRange.h"
#include "FrozenStateComponent.generated.h"

class UFSDPhysicalMaterial;
class USoundBase;

UCLASS(MinimalAPI)
class UFrozenStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FRandRange DeFrostAmount;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioFreeFromIce;
    
    UPROPERTY(EditAnywhere)
    UFSDPhysicalMaterial* IcePhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    UFSDPhysicalMaterial* DwarfFleshMaterial;
    
    UPROPERTY(EditAnywhere)
    float SlowAnimationSpeed;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ThawPlayer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnDefrosting();
    
public:
    UFrozenStateComponent();
};

