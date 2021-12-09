#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "EInputKeys.h"
#include "WalkingStateComponent.generated.h"

class USoundBase;
class UTrackBuilderMovement;
class UAudioComponent;
class APlayerCharacter;

UCLASS(MinimalAPI)
class UWalkingStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool SlidingEnabled;
    
    UPROPERTY(EditAnywhere)
    bool ShowDebug;
    
    UPROPERTY(EditAnywhere)
    float SlideAngle;
    
    UPROPERTY(EditAnywhere)
    float SlideAcceleration;
    
    UPROPERTY(EditAnywhere)
    float MaxSlideSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxClimbDistance;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AudioSliding;
    
    UPROPERTY(EditAnywhere)
    USoundBase* IceSliding;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* AudioComponentSliding;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* AudioComponentIceSliding;
    
    UFUNCTION()
    void TrackGrindCallback(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StartTrackMovement(UTrackBuilderMovement* InMovement);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetIsSliding(bool isSliding);
    
public:
    UFUNCTION()
    void JumpPress();
    
    UWalkingStateComponent();
};

