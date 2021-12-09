#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "FacilityPowerStation.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFacilityPowerStationOnHackingProgressDelegate, float, hackProgress);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFacilityPowerStationOnProgresspointDelegate, float, hackProgress);

UCLASS()
class FSD_API AFacilityPowerStation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFacilityPowerStationOnHackingProgressDelegate OnHackingProgressDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FFacilityPowerStationOnProgresspointDelegate OnProgresspointDelegate;
    
protected:
    UPROPERTY(EditAnywhere)
    float ProgressPoint;
    
    UPROPERTY(EditAnywhere)
    int32 ProgresPointCount;
    
    UPROPERTY(EditAnywhere)
    float TimeToDefend;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Progress)
    float Progress;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsHacking)
    bool IsHacking;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopHacking();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartHacking();
    
protected:
    UFUNCTION()
    void OnRep_Progress();
    
    UFUNCTION()
    void OnRep_IsHacking();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHackingComplete();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHackingChanged(bool NewIsHacking);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsHacked() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFacilityPowerStation();
};

