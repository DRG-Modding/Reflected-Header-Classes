#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PawnSensingComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UPawnSensingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSeePawnDelegate, APawn*, Pawn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHearNoiseDelegate, APawn*, Instigator, const FVector&, Location, float, Volume);
    
    UPROPERTY(EditAnywhere)
    float HearingThreshold;
    
    UPROPERTY(EditAnywhere)
    float LOSHearingThreshold;
    
    UPROPERTY(EditAnywhere)
    float SightRadius;
    
    UPROPERTY(EditAnywhere)
    float SensingInterval;
    
    UPROPERTY(EditAnywhere)
    float HearingMaxSoundAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableSensingUpdates: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlySensePlayers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSeePawns: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHearNoises: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeePawnDelegate OnSeePawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHearNoiseDelegate OnHearNoise;
    
protected:
    UPROPERTY(EditAnywhere)
    float PeripheralVisionAngle;
    
    UPROPERTY(EditAnywhere)
    float PeripheralVisionCosine;
    
public:
    UPawnSensingComponent();
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
    
};

