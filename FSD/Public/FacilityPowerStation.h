#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Hackprogress_DelegateDelegate.h"
#include "FacilityPowerStation.generated.h"

UCLASS(Blueprintable)
class FSD_API AFacilityPowerStation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHackprogress_Delegate OnHackingProgressDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHackprogress_Delegate OnProgresspointDelegate;
    
protected:
    UPROPERTY(EditAnywhere)
    float ProgressPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgresPointCount;
    
    UPROPERTY(EditAnywhere)
    float TimeToDefend;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_Progress)
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsHacking, meta=(AllowPrivateAccess=true))
    bool IsHacking;
    
public:
    AFacilityPowerStation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopHacking();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartHacking();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Progress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsHacking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingChanged(bool NewIsHacking);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHacked() const;
    
};

