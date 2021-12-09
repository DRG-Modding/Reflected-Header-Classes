#pragma once
#include "CoreMinimal.h"
#include "AnimatedItem.h"
#include "JetPackItem.generated.h"

class UCurveFloat;
class UPlayerMovementComponent;

UCLASS(Abstract)
class AJetPackItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    float ActiveTime;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* VerticalAccelerationCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VerticalAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxVerticalSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxHorizontalSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxHorizontalDrift;
    
    UPROPERTY(EditAnywhere)
    float BurnDuration;
    
    UPROPERTY(EditAnywhere)
    float RechargeDuration;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Fuel)
    float Fuel;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Active)
    bool Active;
    
    UPROPERTY(Export, Transient)
    UPlayerMovementComponent* CharacterMovement;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StopThruster();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StartThruster();
    
    UFUNCTION()
    void OnRep_Fuel(float OldFuel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRep_Active();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFuelChanged(float Value, float Delta);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AJetPackItem();
};

