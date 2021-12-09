#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EndMissionResult.h"
#include "PlayerStatsComponent.generated.h"

class APlayerCharacter;
class UCappedResource;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerStatsComponentOnKillAdded);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerStatsComponentOnEndMissionResultReady, const FEndMissionResult&, Result);

UCLASS(BlueprintType)
class UPlayerStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayerStatsComponentOnKillAdded OnKillAdded;
    
protected:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    int32 TotalKills;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    int32 TotalRevived;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    int32 TotalDeaths;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    int32 TotalSupplypodsRequested;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    float TotalGoldMined;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    float TotalMOMsMined;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    float TotalMineralsMined;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    float TotalXPGained;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool EscapedInPod;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    TSubclassOf<APlayerCharacter> LastPlayedClass;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_EndMissionResult)
    FEndMissionResult EndMissionResult;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerStatsComponentOnEndMissionResultReady OnEndMissionResultReady;
    
public:
    UFUNCTION(BlueprintCallable)
    void SendMissionAnalytics(bool trackMorkite);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void SendEndMissionResult(const FEndMissionResult& Result);
    
    UFUNCTION()
    void OnResourceMined(UCappedResource* Resource, float Amount);
    
protected:
    UFUNCTION()
    void OnRep_EndMissionResult();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEndMissionResultReady() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSurvivedInPod() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPlayerStatsComponent();
};
