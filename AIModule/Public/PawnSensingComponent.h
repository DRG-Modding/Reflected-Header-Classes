#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "PawnSensingComponent.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnSensingComponentOnSeePawn, APawn*, Pawn);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPawnSensingComponentOnHearNoise, APawn*, Instigator, const FVector&, Location, float, Volume);

UCLASS(BlueprintType)
class AIMODULE_API UPawnSensingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HearingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LOSHearingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SightRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SensingInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HearingMaxSoundAge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnableSensingUpdates: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOnlySensePlayers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSeePawns: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bHearNoises: 1;
    
    UPROPERTY(BlueprintAssignable)
    FPawnSensingComponentOnSeePawn OnSeePawn;
    
    UPROPERTY(BlueprintAssignable)
    FPawnSensingComponentOnHearNoise OnHearNoise;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PeripheralVisionAngle;
    
    UPROPERTY()
    float PeripheralVisionCosine;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSensingUpdatesEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSensingInterval(const float NewSensingInterval);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPeripheralVisionAngle(const float NewPeripheralVisionAngle);
    
    UFUNCTION(BlueprintPure)
    float GetPeripheralVisionCosine() const;
    
    UFUNCTION(BlueprintPure)
    float GetPeripheralVisionAngle() const;
    
    UPawnSensingComponent();
};

